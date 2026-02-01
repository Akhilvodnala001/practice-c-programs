#include <stdio.h>
int main()
{
int i,j,space;
char firstchar;
char lastchar;
printf("Enter the 1st character(UPPERCASE): ");
scanf("%c",&firstchar);
printf("Enter the last character(UPPERCASE): ");
scanf(" %c",&lastchar);
int n= lastchar-firstchar+1;
for (i=1;i<=n;i++)
{
  for (space=1; space<=n-i;space++)
  {
    printf("  ");
  }
  for (j=1;j<=2*i-1;j++)
  {
    printf("%c ",firstchar);
  }
  firstchar++;
  printf("\n");
}
}
