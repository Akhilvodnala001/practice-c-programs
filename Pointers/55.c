#include <stdio.h>
#include <stdlib.h>
void f(int *p,int *q)
{
p = q;
*q = 2;
}
int i=0,j=1;
int main()
{
f(&i,&j);
printf("i = %d,j = %d",i,j);
getchar();
}
