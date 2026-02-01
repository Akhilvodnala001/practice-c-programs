#include <stdio.h>
union dimen
{
  float radius;
  struct rectangle
  {
    float length;
    float breadth;
  }rect;
  struct triangle
  {
    float breadth;
    float height;
  }tri;
}shape;
float area(int y)
{
  switch(y)
  {
    case 1:
    printf("Enter the radius of the circle: ");
    scanf("%f",&shape.radius);
    return 3.14*shape.radius*shape.radius;
    case 2:
    printf("Enter the length: ");
    scanf("%f",&shape.rect.length);
    printf("Enter the breadth: ");
    scanf("%f",&shape.rect.breadth);
    return shape.rect.length*shape.rect.breadth;
    case 3:
    printf("Enter the breadth: ");
    scanf("%f",&shape.tri.breadth);
    printf("Enter the height: ");
    scanf("%f",&shape.tri.height);
    return 0.5*shape.tri.breadth*shape.tri.height;
    default :
    return -1;
  }
}
int main()
{
  int x;
  printf("Enter the shape (1-Circle,2-Rectangle,3-Triangle): ");
  scanf("%d",&x);
  float ret = area(x);
  if (x == 1)
  {
    printf("Area of circle: %0.1f",ret);
  }
  else if (x == 2)
  {
    printf("Area of rectangle: %0.1f",ret);
  }
  else if (x == 3)
  {
    printf("Area of Triangle: %0.1f",ret);
  }
  else
  {
    printf("Invalid input!");
  }
}
