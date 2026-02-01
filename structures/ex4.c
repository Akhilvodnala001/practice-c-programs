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
  printf("Enter the no.of students: \n");
  scanf("%d",&n);
  struct student s[n];
  struct student *ptr = s;
  for (i=0;i<n;i++)
  {
    printf("Student-%d\n",i+1);
    printf("Enter Name : ");
    //scanf("%s",ptr[i].name);
    scanf("%s",(ptr+i)->name);
    printf("Enter rollno: ");
    scanf("%d",&(ptr+i)->rollno);
    printf("Enter marks: ");
    scanf("%f",&i[ptr].marks);
    //scanf("%f",&(ptr+i).marks);
    
  }
  for (i=0;i<n;i++)
  {
    printf("\n");
    printf("Student-%d: \n",i+1);
    printf("Name: %s\n",ptr[i].name);
    //printf("Name: %s\n",(ptr+i)->name);
    //printf("Rollno: %d\n",ptr[i].rollno);
    printf("Rollno: %d\n",(ptr+i)->rollno);
    printf("Marks: %0.1f\n",ptr[i].marks);
    printf("Marks: %0.1f\n",(ptr+i)->marks);
  }

}

