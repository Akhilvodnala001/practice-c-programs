#include <stdio.h>
#include <string.h>
void swap(char *x,char *y)
{
  char temp = *x;
  *x = *y;
  *y = temp;
}

void permute(char str[],int l,int r)
{
  int i;
  if (l==r)
  {
    printf("%s\n",str);
  }
  for (i=l;i<=r;i++)
  {
    swap(&str[l],&str[i]);
    permute(str,l+1,r);
    swap(&str[l],&str[i]);
  }
}

int main()
{
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  
  int n;
  n = strlen(str);
  printf("Permutations of %s are :\n",str);
  permute(str,0,n-1);
}
