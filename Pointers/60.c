#include <stdio.h> 
int main()
{
int arr[5][5];
printf("%d",((arr==*arr)&&(*arr==arr[0]))); 
return 0;
}
