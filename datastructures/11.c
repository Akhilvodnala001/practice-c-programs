#include <stdio.h>
#include <stdlib.h>
struct emp
{
  char fname[15];
  char lname[15];
  char empnum[15];
};
struct add
{
  char city[15];
  char state[15];
  char street[15];
  char h_no[15];
};
struct person
{
  struct emp *ptr;
  struct add *dtr;
  struct person *next;
};
struct add *addcreate()
{
  struct add *addhead;
  addhead = (struct add*)malloc(sizeof(struct add));
  printf("Enter the city : ");
  scanf("%s",addhead->city);
  printf("Enter the state : ");
  scanf("%s",addhead->state);
  printf("Enter the street : ");
  scanf("%s",addhead->street);
  printf("Enter the home.no : ");
  scanf("%s",addhead->h_no);
  return addhead;
}
struct emp *empcreate()
{
  struct emp *emphead;
  emphead = (struct emp*)malloc(sizeof(struct emp));
  printf("Enter the first name of the employee: ");
  scanf("%s",emphead->fname);
  printf("Enter the last name of the employee: ");
  scanf("%s",emphead->lname);
  printf("Enter the employee number: ");
  scanf("%s",emphead->empnum);
  return emphead;
}
struct person *PersonCreate()
{
  struct person *head;
  head = (struct person*)malloc(sizeof(struct person));
  head->ptr = empcreate();
  head->dtr = addcreate();
  int choice;
  printf("Enter 1 to add another employee, 0 to Terminate: ");
  scanf("%d",&choice);
  if (choice == 1)
  {
    head->next = PersonCreate();
  }
  else
  {
    return head;
  }
  return head;
}
int empdisplay(struct emp *Emp)
{
  printf("First Name: %s\n",Emp->fname);
  printf("Last Name: %s\n",Emp->lname);
  printf("Employee Number: %s\n",Emp->empnum);
  return 1;
}
int adddisplay(struct add *Add)
{
  printf("City: %s\n",Add->city);
  printf("State: %s\n",Add->state);
  printf("Street: %s\n",Add->street);
  printf("Home-No: %s\n",Add->h_no);
  return 1;
}
int display(struct person *Head)
{
  static int empnum = 1;
  if (Head == NULL)
  {
    empnum = 1;
    return 0;
  }
  printf("\tEMPLOYEE-%d\n",empnum);
  empdisplay(Head->ptr);
  adddisplay(Head->dtr);
  empnum++;
  display(Head->next);
}
struct person *insertbegin(struct person *main,struct person *insertnode)
{
  struct person *inserttemp = insertnode;
  while (inserttemp->next != NULL)
  {
    inserttemp = inserttemp->next;
  }
  inserttemp->next = main;
  main = insertnode;
  return main;
} 
int main()
{
  struct person *head;
  head = PersonCreate();
  printf("\t\tBEFORE INSERTION: \n");
  display(head);
  struct person *insert;
  printf("\nEnter the details of the person you wanna insert at the beginning: \n");
  insert = PersonCreate();
  head = insertbegin(head, insert);
  printf("\t\tAFTER INSERTION: \n");
  display(head);
}
