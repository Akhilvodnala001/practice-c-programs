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
  printf("Enter the no.of students : ");
  scanf("%d",&n);
  struct student s[n];
  for (i=0;i<n;i++)
  {
    printf("Enter the student-%d details:\nName: ",i+1);
    scanf("%s",s[i].name);
    printf("RollNo: ");
    scanf("%d",&s[i].rollno);
    printf("Marks: ");
    scanf("%f",&s[i].marks);
  }
  
  for (i=0;i<n;i++)
  {
    printf("Student-%d Details: \n",i+1);
    printf("Name: %s\n",s[i].name);
    printf("RollNo: %d\n",s[i].rollno);
    printf("Marks: %0.1f\n",s[i].marks);
  }
  return 0;

}
