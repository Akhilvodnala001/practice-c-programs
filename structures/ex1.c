#include <stdio.h>
struct student
{
  char name[30];
  int rollno;
  float marks;
};
int main()
{
  int i;
  struct student s;
  printf("Enter the name: ");
  scanf("%s",s.name);
  printf("Enter the rollno: ");
  scanf("%d",&s.rollno);
  printf("Enter the marks: ");
  scanf("%f",&s.marks);
  
  printf("Name: %s\n",s.name);
  printf("RollNo: %d\n",s.rollno);
  printf("Marks: %0.1f\n",s.marks);

}
