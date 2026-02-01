#include <stdio.h>
int main()
{
int a = 12;
void *ptr = &a;
printf("%d",*(int *)ptr);
} 



