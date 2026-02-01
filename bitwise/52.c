#include <stdio.h>
int findMSB(int num)
{
  int msb = -1;
  while (num>0)
  {
    num = num>>1;
    msb++;
  }
  return msb;
}
int ispalindrome(int num)
{
  int flag = 1;
  int left = findMSB(num);
  int right = 0;
  while (left>right)
  {
    int bitleft = (num>>left)&1;
    int bitright = (num>>right)&1;
    if (bitleft != bitright)
    {
      flag = 0;
    }
    left--;
    right++;
  }
  return flag;
}
int main()
{
  int num = 0xFFFFFFFF;
  printf("Enter number: ");
  scanf("%d",&num);
  if (ispalindrome(num))
  {
     printf("Palindrome!\n");
  }
  else
  {
     printf("Not a palindrome!\n");
  }
}
