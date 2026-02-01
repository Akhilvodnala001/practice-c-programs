#include <stdio.h>
#define swap_16Bit(num) ((num & 0x00FF) << 8)|((num & 0xFF00) >> 8)
int main()
{
  unsigned short num = 0x1234;
  num = swap_16Bit(num);
  printf("%x",num);
}
