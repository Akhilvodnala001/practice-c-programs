#include <stdio.h>
int main()
{
int a,b,add,sub,mul,div,mod;
printf("Enter the 1st number: ");
scanf("%d",&a);
printf("Enter the 2nd number: ");
scanf("%d",&b);

//Pointer declaration
int *ptr1;
int *ptr2;

//Assigning a valid adress to the pointer
ptr1=&a;
ptr2=&b;

//Arithmetic operations
add = (*ptr1)+(*ptr2);
sub = (*ptr1)-(*ptr2);
mul = (*ptr1)*(*ptr2);
div = (*ptr1)/(*ptr2);
mod = (*ptr1)%(*ptr2);

printf("Adding two numbers using pointers and arithmetic operations: %d\n",add);
printf("Subtracting two numbers using pointers and arithmetic operations: %d\n",sub);
printf("Multiplying two numbers using pointers and arithmetic operations: %d\n",mul);
printf("Dividing two numbers using pointers and arithmetic operations: %d\n",div);
printf("Modulus division of two numbers using pointers and arithmetic operations: %d\n",mod);

}
