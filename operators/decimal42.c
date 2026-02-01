#include <stdio.h>
int dec;
int main()
{
printf("Enter the decimal number: ");
scanf("%d",&dec);
printf("The decimal number in octal is O%o\n",dec);
printf("The decimal number in hexadecimal is 0x%x\n",dec);
}
