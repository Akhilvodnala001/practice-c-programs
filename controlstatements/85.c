#include <stdio.h>
int main()
{
int i,j,n;
char firstchar;
char lastchar;
printf("Enter the first alphabet(UPPERCASE): ");
scanf("%c",&firstchar);
printf("Enter the last alphabet(UPPERCASE): ");
scanf(" %c",&lastchar);
n=(lastchar-firstchar+1);
for (i=1;i<=n;i++)
{
  for (j=1;j<=i;j++)
  {
    printf("%c ",firstchar);
  }
  firstchar++;
  printf("\n");
}

}
