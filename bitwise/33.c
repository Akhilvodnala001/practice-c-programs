#include <stdio.h>
#define swap_64bit(num) ((num & 0xFFFFFFFF00000000)>>32) | ((num & 0x00000000FFFFFFFF)<<32)
int main()
{
  unsigned long num = 0x1234567887654321;
  num = swap_64bit(num);
  printf("After swapping: %lx\n",num);
}
