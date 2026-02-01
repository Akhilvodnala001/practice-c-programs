#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  char str[10];
  int i = 0;
  int j;
  int n = num;
  while (n!=1)
  {
    if (n%2 == 1)
    {
      str[i++] = '1';
    }
    else
    {
      str[i++] = '0';
    }
    n = n/2;
  }
  str[i++] = '1';
  str[i] = '\0';
  int start = 0;
  int end = i-1;
  while (start<end)
  {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
  }
  printf("The binary format of %d is %s",num,str);

}
