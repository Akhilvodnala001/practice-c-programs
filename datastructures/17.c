#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct person
{
  char fname[30];
  char lname[30];
  char emp_id[30];
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
  struct person *personnode;
  personnode = (struct person*)malloc(sizeof(struct person));
  printf("Enter First name: ");
  scanf("%s",personnode->fname);
  printf("Enter Last name: ");
  scanf("%s",personnode->lname);
  printf("Enter employee-ID: ");
  scanf("%s",personnode->emp_id);
  return personnode;
}
struct add *addcreate()
{
  struct add *addnode;
  addnode = (struct add*)malloc(sizeof(struct add));
  printf("City: ");
  scanf("%s",addnode->city);
  printf("State: ");
  scanf("%s",addnode->state);
  printf("Street: ");
  scanf("%s",addnode->street);
  printf("H-No: ");
  scanf("%s",addnode->h_no);
  return addnode;
}
struct emp *create()
{
  struct emp *newnode;
  newnode = (struct emp*)malloc(sizeof(struct emp));
  newnode->ptr = personcreate();
  newnode->dtr = addcreate();
  int choice;
  printf("1 to add another node,0 to Terminate: ");
  scanf("%d",&choice);
  if (choice)
  {
    newnode->next = create();
  }
  else
  {
    return newnode;
  }
  return newnode;
}
int search(struct emp *head,char str[])
{
  if (head == NULL)
  {
    return 0;
  }
  if (strcmp(head->ptr->emp_id,str) == 0)
  {
    return 1;
  }
  search(head->next,str);
}
int main()
{
  struct emp *head;
  head = create();
  char id[15];
  printf("Enter the employee ID: ");
  scanf("%s",id);
  int found;
  found = search(head,id);
  if (found == 1)
  {
    printf("Found!");
  }
  else
  {
    printf("Not Found!");
  }
}
