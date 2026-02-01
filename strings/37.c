#include <stdio.h>
#include <string.h>
int stringproduct(char [],char [],char []);
int main()
{
char str1[10];
char str2[10];
char result[100];
int product;
printf("Enter the 1st number: ");
fgets(str1,sizeof(str1),stdin);
printf("Enter the 2nd number: ");
fgets(str2,sizeof(str2),stdin);
str1[strcspn(str1,"\n")] = '\0';
str2[strcspn(str2,"\n")] = '\0';
product = stringproduct(str1,str2,result);
printf("The product of two numbers is %s",result);
}

int stringproduct(char str1[],char str2[],char result[])
{
  int num1 = 0;
  int num2 = 0;
  int i;
  int product;
  for (i=0;str1[i]!='\0';i++)
  {
    num1=num1*10+(str1[i]-'0');
  }
  for (i=0;str2[i]!='\0';i++)
  {
    num2=num2*10+(str2[i]-'0');
  }
  product = num1*num2;
  sprintf(result,"%d",product);
}
