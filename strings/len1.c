#include <stdio.h>
#include <string.h>
int main()
{
char name[30];
unsigned int length;
int size;
printf("Enter your name: ");
fgets(name,sizeof(name),stdin); //Length will be no.of visible characters + 1
//scanf("%s",&name); //Length will be no.of visible characters
length = strlen(name);
printf("Length of %s is %d and its size is %d",name,length,size);
}
