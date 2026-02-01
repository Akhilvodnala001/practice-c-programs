#include <stdio.h>
int main()
{
int num;
printf("Enter a number: ");
scanf("%d",&num);
int i;
int val;

for (i=1;i<num;i++)
{
  if ((i*i) == num)
  {
    val = 1;
  }
}
if (val==1)
{
  printf("%d is a perfect square root...",num);
}
else
{
  printf("%d is not a perfect square root...",num);
}
}
