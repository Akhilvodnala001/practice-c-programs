#include <stdio.h>
int main()
{
char str[30];
printf("Enter your name: ");
fgets(str,sizeof(str),stdin);
printf("Your name is ");
printf("%s",str);
}
