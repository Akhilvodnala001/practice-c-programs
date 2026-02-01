#include <stdio.h>
int main()
{
  char *arr[4];
  arr[0] = "Akhil";
  arr[1] = "Sai";
  arr[2] = "Vodnala";
  arr[3] = 0;
  int i;
  for (i=0;arr[i]!=0;i++)
  {
    printf("%s ",arr[i]);
  }
  char *temp = arr[0];
  arr[0] = arr[2];
  arr[2] = temp;
  
  temp = arr[1];
  arr[1] = arr[2];
  arr[2] = temp;
  printf("\nUpdated: ");
  for (i=0;arr[i]!=0;i++)
  {
    printf("%s ",arr[i]);
  }
}
