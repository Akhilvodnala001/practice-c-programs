#include <stdio.h>
#define and(a,b) a & b
#define leftshift(num,n) num<<n
#define rightshift(num,n) num>>n
#define or(l,r) l|r
int main()
{ 
  int num = 0xab;
  int l = and(0xa0,0xab);
  l = rightshift(l,4);
  int r;
  r = and(0x0b,0xab);
  r = leftshift(r,4);
  num = or(l,r);
  printf("After swapping nibbles: 0x%x\n",num);
}
