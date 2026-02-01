#include <stdio.h>
int main()
{
int length,breadth,area;
while (1)
{
  printf("Enter the length of the rectangle(cms): ");
  scanf("%d",&length);
  printf("Enter the breadth of the rectangle(cms): ");
  scanf("%d",&breadth);
  if (length>0 && breadth>0)
  {
    area = length*breadth;
    printf("Area of the given rectangle is %d",area);
    break;
  }
  else
  {
    printf("Invalid input! Enter only positive numbers...\n");
    printf("Please Enter the valid input! \n\n");
  }
}
}
