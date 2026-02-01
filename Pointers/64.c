#include <stdio.h>
int main()
{
int arr[2][3] = {2,1,3,2,3,4};
printf("Using pointer notation: \n");
printf("%d %d %d",*(*(arr+0)+0),*(*(arr+0)+1),*(*(arr+0)+2));
printf("Using mixed notation: \n");
printf("%d %d %d",*(arr[1]+0),*(arr[1]+1),*(arr[1]+2)); 
}
