#include <stdio.h>
int main()
{
int t;
printf("Enter which table you want: ");
scanf("%d",&t);
int i;
printf("The multiplication table of %d is \n",t);
for(i=1;i<=10;i++)
{
  printf("%d*%d=%d\n",t,i,t*i);
}

}
