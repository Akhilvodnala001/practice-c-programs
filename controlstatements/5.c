#include <stdio.h>
int main()
{
char name[50];
int age;
printf("Enter the name of the person: ");
scanf("%s",&name);
printf("Enter the age of %s:",name);
scanf("%d",&age);
if(age>=18)
{
  printf("Eligible for voting");
}
else
{
  printf("Not eligible for voting");
}
}
