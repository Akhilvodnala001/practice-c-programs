#include <string.h>
#include <stdio.h>
void lower(char [],int);
void upper(char [],int);
int main()
{
int i,len;
char name[30];
printf("Enter the string: ");
fgets(name,sizeof(name),stdin);
len = strlen(name);
len = len-1;
printf("1 - Lower\n");
printf("2 - Upper\n");
int option;
scanf("%d",&option);
switch(option)
{
  case 1:
    lower(name,len);
    break;
  case 2:
    upper(name,len);
    break;
}
}


void lower(char name[],int len)
{
  int i;
  for (i=0;i<len;i++)
  {
    if (name[i] >= 65 && name[i] <= 90)
    {
      name[i] = name[i] + 32;
    }
  }
  printf("%s",name);

}

void upper(char name[],int len)
{
  int i;
  for (i=0;i<len;i++)
  {
    if (name[i] >= 97 && name[i] <= 122)
    {
      name[i] = name[i] - 32;
    }
  }
  printf("%s",name);

}
