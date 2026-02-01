#include <stdio.h>
int main()
{
int i,j,space,n=5;
for (i=1;i<=n;i++)
{
  for (space=1; space<=n-i; space++)
  {
    printf("  ");
  }
  if (i == 1)
  {
    printf("* ");
  }
  else
  {
    printf("* ");
    for (j=1; j<=2*i-3; j++)
    {
      printf("  ");
    }
    printf("* ");
  }
  printf("\n");
}

for (i=n-1; i>=1; i--)
{
  for (space=n-i; space>=1; space--)
  {
    printf("  ");
  }
  if(i==1)
  {
    printf("* ");
  }
  else
  {
    printf("* ");
    for (j=1; j<=2*i-3; j++)
    {
      printf("  ");
    }
    printf("* ");
  }
  printf("\n");
}

}
