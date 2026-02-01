#include <stdio.h>
struct coordinates
{
  int x;
  int y;
}point[2];

int isequal(struct coordinates p,struct coordinates q)
{
  return ((p.x == q.x) && (p.y == q.y));
}

int main()
{
  int i;
  for (i=0;i<2;i++)
  {
    printf("Point - %d\n",i+1);
    printf("x : ");
    scanf("%d",&point[i].x);
    printf("y : ");
    scanf("%d",&point[i].y);
  }
  if (isequal(point[0],point[1]))
  {
    printf("Coordinates are same!");
  }
  else
  {
    printf("Coordinates are not same!");
  }
  
}
