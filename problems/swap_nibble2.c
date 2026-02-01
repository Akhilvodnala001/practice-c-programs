#include <stdio.h>
int main()
{
  int num = 0xab;
  int result = (((0xa0 & num)>>4) | ((0x0b & num)<<4));
  printf("0x%x",result);
}
