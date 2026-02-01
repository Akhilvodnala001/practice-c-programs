#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct person
{
  char fname[15];
  char lname[15];
  char emp_num[15];
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
struct person *pcreate()
{
  struct person *pnode;
  pnode = (struct person*)malloc(sizeof(struct person));
  printf("First Name: ");
  scanf("%s",pnode->fname);
  printf("Last Name: ");
  scanf("%s",pnode->lname);
  printf("Employee number: ");
  scanf("%s",pnode->emp_num);
  return pnode;
}
struct add *dcreate()
{
  struct add *dnode;
  dnode = (struct add*)malloc(sizeof(struct add));
  printf("City: ");
  scanf("%s",dnode->city);
  printf("State: ");
  scanf("%s",dnode->state);
  printf("Street: ");
  scanf("%s",dnode->street);
  printf("H-No: ");
  scanf("%s",dnode->h_no);
  return dnode;
}
struct emp *create()
{
  struct emp *newnode;
  newnode = (struct emp*)malloc(sizeof(struct emp));
  newnode->ptr = pcreate();
  newnode->dtr = dcreate();
  int choice;
  printf("0 to Stop, 1 to Continue: ");
  scanf("%d",&choice);
  if (choice)
  {
    newnode->next = create();
  }
  else
  {
    newnode->next = NULL;
    return newnode;
  }
  return newnode;
}
void display(struct emp *head)
{
  if (head == NULL)
  {
    return;
  }
  printf("First Name: %s\n",head->ptr->fname);
  printf("Last Name: %s\n",head->ptr->lname);
  printf("Employee Number: %s\n",head->ptr->emp_num);
  printf("City: %s\n",head->dtr->city);
  printf("State: %s\n",head->dtr->state);
  printf("Street: %s\n",head->dtr->street);
  printf("H-No: %s\n\n",head->dtr->h_no);
  display(head->next);
}
struct emp *even_exstract(struct emp *start)
{
  struct emp *even;
  struct emp *head = NULL;
  struct emp *tail = NULL;
  int num;
  while (start!=NULL)
  {
    num = atoi(start->ptr->emp_num);
    if (num%2 == 1)
    {
       even = (struct emp*)malloc(sizeof(struct emp));
       even->ptr = (struct person*)malloc(sizeof(struct person));
       even->dtr = (struct add*)malloc(sizeof(struct add));
       strcpy(even->ptr->fname,start->ptr->fname);
       strcpy(even->ptr->lname,start->ptr->lname);
       strcpy(even->ptr->emp_num,start->ptr->emp_num);
       
       strcpy(even->dtr->city,start->dtr->city);
       strcpy(even->dtr->state,start->dtr->state);
       strcpy(even->dtr->street,start->dtr->street);
       strcpy(even->dtr->h_no,start->dtr->h_no);
       if (head == NULL)
       {
          head = tail = even;
       }
       else
       {
          tail->next = even;
          tail = tail->next;
       }
    }
    start = start->next;
  }
  return head;
}
int main()
{
  struct emp *head;
  head = create();
  printf("\nOriginal Linked-List:\n\n");
  display(head);
  struct emp *evenhead;
  evenhead = even_exstract(head);
  printf("\n\nList with odd employee numbers: \n");
  display(evenhead);
  
} 
