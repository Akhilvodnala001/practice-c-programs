#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Students
{
  char studentID[30];
  char CourseName[10];
  char grade;
};
void NewEnrollment(struct Students *new,int k)
{
  for (int i=0;i<k;i++)
  {
    printf("Student-%d: \n",i+1);
    printf("Student-ID: ");
    scanf("%s",(new+i)->studentID);
    printf("Course Name: ");
    scanf("%s",(new+i)->CourseName);
    printf("Grade: ");
    scanf(" %c",&(new+i)->grade);
  }
}
int find(struct Students *search,int k,char *studentID)
{
  for (int i=0;i<k;i++)
  {
    if (strcmp((search+i)->studentID,studentID) == 0)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  struct Students *student;
  int n;
  printf("No.of students: ");
  scanf("%d",&n);
  student = (struct Students *)malloc(n * sizeof(struct Students));
  NewEnrollment(student,n);

  char studentID[30];
  printf("Enter the student-id to search: ");
  scanf("%s",studentID);
  
  int k = find(student,n,studentID);
  if (k != -1)
  {
    printf("Found!");
  }
  else
  {
    printf("Not Found!");
  }
  free(student);

}
