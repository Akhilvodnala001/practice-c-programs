#include <stdio.h>
struct student
{
  char name[30];
  int rollno;
  float marks;
};
int main()
{
  int i,n;
  printf("Enter the no.of students: ");
  scanf("%d",&n);
  struct student s;
  struct student *ptr = &s;
  printf("Enter the name: ");
  scanf("%s",ptr->name);
  printf("Enter the rollno: ");
  scanf("%d",&ptr->rollno);
  printf("Enter the marks: ");
  scanf("%f",&ptr->marks);
  
  printf("Name: %s\n",ptr->name);
  printf("Rollno: %d\n",ptr->rollno);
  printf("Marks: %0.1f",ptr->marks);
} 

