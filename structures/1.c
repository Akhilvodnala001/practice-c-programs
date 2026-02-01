#include <stdio.h>
#define n 2
struct student 
{
  char name[30];
  int rollno;
  float marks;
};
void input(struct student *p)
{
  for (int i=0;i<n;i++)
  {
    printf("Student-%d: \n",i+1);
    printf("Name: ");
    scanf("%s",(p+i)->name);
    printf("RollNo: ");
    scanf("%d",&(p+i)->rollno);
    printf("Marks: ");
    scanf("%f",&(p+i)->marks);
  }
}
void display(struct student *q)
{
  for (int i=0;i<n;i++)
  {
    printf("\nStudent-%d: \n",i+1);
    printf("Name: %s\n",(q+i)->name);
    printf("Rollno: %d\n",(q+i)->rollno);
    printf("Marks: %0.1f\n",(q+i)->marks);
  } 
}
int main()
{
  struct student s[n];
  struct student *ptr = s;
  input(ptr);
  display (ptr);
  return 0;
  
}


