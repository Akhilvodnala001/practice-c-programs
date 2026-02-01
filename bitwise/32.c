#include <stdio.h>
#define swap_32bit(num) ((num & 0x0000FFFF)<<16)|((num & 0xFFFF0000)>>16)
int main()
{
  unsigned int num = 0x12345678;
  num = swap_32bit(num);
  printf("After swapping: 0x%x",num);
}
