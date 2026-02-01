#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct person
{
  char fname[15];
  char lname[15];
  char id[15];
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
  struct person *pnewnode;
  pnewnode = (struct person*)malloc(sizeof(struct person));
  printf("First Name: ");
  scanf("%s",pnewnode->fname);
  printf("Last Name: ");
  scanf("%s",pnewnode->lname);
  printf("ID: ");
  scanf("%s",pnewnode->id);
  return pnewnode;
}
struct add *dcreate()
{
  struct add *dnewnode;
  dnewnode = (struct add*)malloc(sizeof(struct add));
  printf("City: ");
  scanf("%s",dnewnode->city);
  printf("State: ");
  scanf("%s",dnewnode->state);
  printf("Street: ");
  scanf("%s",dnewnode->street);
  printf("H-No: ");
  scanf("%s",dnewnode->h_no);
  return dnewnode;
}
struct emp *create()
{
  struct emp *newnode;
  newnode = (struct emp*)malloc(sizeof(struct emp));
  newnode->ptr = pcreate();
  newnode->dtr = dcreate();
  int choice;
  printf("0 to stop, 1 to continue: ");
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
void display(struct emp *start)
{
  if (start == NULL)
  {
    return;
  }   
  printf("First Name: %s\n",start->ptr->fname);
  printf("Last Name: %s\n",start->ptr->lname);
  printf("ID: %s\n",start->ptr->id);
  printf("City: %s\n",start->dtr->city);
  printf("State: %s\n",start->dtr->state);
  printf("Street: %s\n",start->dtr->street);
  printf("H-No: %s\n",start->dtr->h_no);
  display(start->next);
}
struct emp *sortbycity(struct emp *head)
{
  struct emp *i,*j;
  for (i=head;i!=NULL;i=i->next)
  {
    for (j=i->next;j!=NULL;j=j->next)
    {
      if (strcmp(i->dtr->city,j->dtr->city) > 0)
      {
        struct person ptemp = *(i->ptr);
        *(i->ptr) = *(j->ptr);
        *(j->ptr) = ptemp;
        
        struct add dtemp = *(i->dtr);
        *(i->dtr) = *(j->dtr);
        *(j->dtr) = dtemp;
      }
    }
  }
  return head;
}
int main()
{
  struct emp *head;
  head = create();
  display(head);
  printf("Sorted linked-list(By City): \n");
  head = sortbycity(head);
  display(head);
}
