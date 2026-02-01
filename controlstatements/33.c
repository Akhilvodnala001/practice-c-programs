#include <stdio.h>
int main()
{
int num;
printf("Enter a number: ");
scanf("%d",&num);
int fact = 1;
int i = 1;
while(i<=num)
{
  fact = fact*i;
  i++;
}
printf("Factorial is %d",fact);


}
