#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  printf("Octal form: 0%o\n",num);
  printf("Hexadecimal form: 0x%x\n",num);
}
