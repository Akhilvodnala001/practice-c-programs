#include <stdio.h>
float rad;
main()
{
printf("Enter the radius of the circle in CMs to get the area and the perimeter: ");
scanf("%f",&rad);
float area = 3.14*rad*rad ;
float perimeter = 2*3.14*rad ;
printf("The area of the circle is %0.1f \n",area);
printf("The perimeter of the circle is %0.1f \n",perimeter);
}
