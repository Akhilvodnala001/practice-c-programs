#include <stdio.h>
int a,b;
int main()
{
printf("Enter the 1st number: ");
scanf("%d",&a);
printf("Enter the 2nd number: ");
scanf("%d",&b);

//Ternary or Conditional OP

((a>b)?(printf("The 1st number is greater than the 2nd number and the difference between them is %d",(a-b))):(printf("The 1st number is smaller than 2nd number and their sum is %d",(a+b))));
return 0;
}
