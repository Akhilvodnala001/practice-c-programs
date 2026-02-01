#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    if (argc < 3) {
        fprintf(stderr, "Usage: %s <source> <destination>\n", argv[0]);
        return 1;
    }

    int srcfd = open(argv[1], O_RDONLY);
    if (srcfd < 0) {
        perror("open src");
        return 1;
    }

    struct stat buf;
    if (fstat(srcfd, &buf) < 0) {
        perror("fstat");
        close(srcfd);
        return 1;
    }

    char *src = mmap(NULL, buf.st_size, PROT_READ, MAP_SHARED, srcfd, 0);
    if (src == MAP_FAILED) {
        perror("mmap src");
        close(srcfd);
        return 1;
    }

    int dstfd = open(argv[2], O_CREAT | O_RDWR, 0666);
    if (dstfd < 0) {
        perror("open dst");
        munmap(src, buf.st_size);
        close(srcfd);
        return 1;
    }

    if (ftruncate(dstfd, buf.st_size) < 0) {
        perror("ftruncate");
        munmap(src, buf.st_size);
        close(srcfd);
        close(dstfd);
        return 1;
    }

    char *dst = mmap(NULL, buf.st_size, PROT_READ | PROT_WRITE, MAP_SHARED, dstfd, 0);
    if (dst == MAP_FAILED) {
        perror("mmap dst");
        munmap(src, buf.st_size);
        close(srcfd);
        close(dstfd);
        return 1;
    }

    memcpy(dst, src, buf.st_size);

    munmap(src, buf.st_size);
    munmap(dst, buf.st_size);
    close(srcfd);
    close(dstfd);

    return 0;
}

