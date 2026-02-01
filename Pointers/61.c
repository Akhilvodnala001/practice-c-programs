#include <stdio.h> 
int main()
{
int x = 10;
int *y,**z;
y = &x;
z = &y;
printf("x = %d, y = %d, z = %d",x,*y,**z);
}
