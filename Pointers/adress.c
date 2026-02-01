#include <stdio.h>
int main()
{
int val=45;
short sual=4;

//Declaring a pointer
int *ptr;
short *sptr;

//Assigning a valid adress to the pointer
ptr=&val;
sptr=&sual;

//Dereferencing
//printing the adress of the variables
printf("adress of variable 1 is %p\n",ptr);
printf("adress of variabe 2 is %p\n",sptr);

//printing the size of pointer variables
printf("size of the pointer variable \"val\" is %zu\n",sizeof(ptr));
printf("size of the pointer variable \"sual\" is %zu\n",sizeof(sptr));

//printing the size of the values referencing by them
printf("size of the value of \"val\" dereferenced by them is %zu\n",sizeof(*ptr));
printf("size of the value of \"sual\" dereferenced by them is %zu\n",sizeof(*sptr));

//Value of val and sual using pointer variables i.e, dereferencing...
printf("Value of val using pointer variables: %d\n",*ptr);
printf("Value of sual using pointer variables: %d\n", *sptr);
}
