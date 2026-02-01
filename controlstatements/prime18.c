#include <stdio.h>
#include <math.h>

int main()
{
int n;
int a;
int isprime = 1;
printf("Enter a number: ");
scanf("%d",&n);
int i=2;

if (n>0)
{
  while (i<n)
  {
    if (n%i==0)
    { 
      isprime = 0;
      break;
    }
    i++;
  }
  if(isprime == 0)
  {
    printf("%d is not a prime number",n);
  }
  else
  {
    printf("%d is a prime number",n);
  }
}
else
{
printf("Invalid!...Enter a +ve number");
}

//By using square root...
/* a=sqrt(n);
while (i <= a)
{
  if(n%i == 0)
  {
    isprime = 0;
    break;
  }
  i++;
}*/

}
