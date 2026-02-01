#include <stdio.h> 
#include <stdlib.h>
int main()
{
int *arr = (int *)calloc(5,sizeof(int));
for(int i=0;i<5;i++)
{
*(arr+i) = i;
}
printf("%d",arr[3]);
}
