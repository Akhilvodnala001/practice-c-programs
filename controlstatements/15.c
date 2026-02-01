#include <stdio.h>
int main()
{
int a;
int from;
int to;
printf("Even numbers from: ");
scanf("%d",&from);
printf("to ");
scanf("%d",&to);
printf("Even number from %d to %d are\n",from,to);
for (a=from;a<=to;a++)
{
  if (a%2==0)
  {
    printf("%d\n",a);
  }
}

}
