#include <stdio.h>
int main()
{
int num;
int digit;
int esum = 0;
int osum = 0;
printf("Enter a number with a combination of odd and even digits: ");
scanf("%d",&num);
int i=num;
while(i>0)
{
  digit = 0;
  digit = i%10;
  if (digit%2 == 0)
  {
    esum = esum + digit;
  }
  else
  {
    osum = osum + digit;
  }
  i=i/10;
}
printf("Sum of even digits in %d is %d",num,esum);
printf("\nSum of odd digits in %d is %d",num,osum);
}
