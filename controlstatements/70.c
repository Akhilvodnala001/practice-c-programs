#include <stdio.h>
int main()
{
int r;
printf("Enter the radius of the circle: ");
scanf("%d",&r);
int i;
float pi = 3.14 ;
float area;

for (i=1;i<=r;i++)
{
  if (i == r)
  {
    area = pi*r*r;
    printf("The area of the circle is %0.1f",area);
  }
}


}
