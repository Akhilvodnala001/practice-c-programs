#include <stdio.h>
#include <stdlib.h>
int main()
{
int *ptr;
int i,n=5;
ptr = (int *)malloc(n*sizeof(int));
for (i=0;i<n;i++)
{
scanf("%d",ptr+i);
}

for(i=0;i<n;i++)
{
printf("%d ",*(ptr+i));
}

}

