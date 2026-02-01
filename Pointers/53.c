#include <stdio.h>
void fun(int x)
{
x = 30;
}
int main()
{
int a = 10;
fun(a);
printf("%d\n",a);
}



