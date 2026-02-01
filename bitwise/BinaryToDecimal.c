#include <stdio.h>
#include <string.h>
int main()
{
  char str[10];
  printf("Enter Binary Number: ");
  scanf("%s",str);
  int num = 0;
  int count = 0;
  for (int i=strlen(str)-1;i>=0;i--)
  {
    if (str[i] == 49)
    {
      num = num + 1*(1<<(count++));
    }
    else
    {
      num = num + 0*(1<<(count++));
    }
  }
  printf("The given number in decimal format is %d\n",num);
}
