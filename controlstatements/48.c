#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);

int i;
printf("The odd numbers till %d are ",n);

for (i=0;i<n;i++)
{
  if (i%2==1)
  {
    printf("%d ",i);
  }
}

}
