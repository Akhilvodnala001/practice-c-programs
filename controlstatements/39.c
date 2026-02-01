#include <stdio.h>
int main()
{
int num;
int digit;
int rev=0;
printf("Enter a  number: ");
scanf("%d",&num);
int original=num;
while(num!=0)
{
  digit=num%10;
  rev=rev*10 + digit;
  num=num/10;
}
if (original == rev)
{
  printf("Given number is a palindrome...");
}
else
{
  printf("Given number is not a palindrome...");
}



}
