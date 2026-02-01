#include <stdio.h>
#include <stdlib.h>
struct person
{
  char fname[15];
  char lname[15];
  char emp_no[15];
};
struct add
{
  char city[15];
  char state[15];
  char street[15];
  char h_no[15];
};
struct emp
{
  struct person *ptr;
  struct add *dtr;
  struct emp *next;
};
struct person *personcreate()
{ 
  struct person *personhead;
  personhead = (struct person*)malloc(sizeof(struct person));
  printf("Enter the first name: ");
  scanf("%s",personhead->fname);
  printf("Enter the last name: ");
  scanf("%s",personhead->lname);
  printf("Enter the employee number: ");
  scanf("%s",personhead->emp_no);
  return personhead;
}
struct add *addcreate()
{
  struct add *additional;
  additional = (struct add*)malloc(sizeof(struct add));
  printf("Enter the city of the employee: ");
  scanf("%s",additional->city);
  printf("Enter the state of the employee: ");
  scanf("%s",additional->state);
  printf("Enter the street of the employee: ");
  scanf("%s",additional->street);
  printf("Enter the home no of the employee: ");
  scanf("%s",additional->h_no);
  return additional;
}
struct emp *empcreate()
{
  struct emp *head;
  head = (struct emp*)malloc(sizeof(struct emp));
  head->ptr = personcreate();
  head->dtr = addcreate();
  int choice;
  printf("Enter 1 to add another employee, 0 to Stop: ");
  scanf("%d",&choice);
  if (choice)
  {
    head->next = empcreate();
  }
  else
  {
    return head;
  }
  return head;
}
int main()
{
  struct emp *head;
  head = empcreate();
}
