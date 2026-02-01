#include <stdio.h>
#include <string.h>
int main()
{
  char str[30];
  char sub[30];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  int start,end,i,k=0;
  printf("Enter the starting position: ");
  scanf("%d",&start);
  printf("Enter the ending position: ");
  scanf("%d",&end);
  for (i=start-1;i<end;i++)
  {
    sub[k] = str[i];
    k++;
  }
  printf("The exstracted string is %s",sub);
}
