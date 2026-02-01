#include <stdio.h>
int main()
{
float cel;
printf("Enter the temparature in celsius: ");
scanf("%f",&cel);
float f = (cel*9/5)+32 ;
printf("The %0.2f celsius in fahreinheit is %0.2f",cel,f);
}
