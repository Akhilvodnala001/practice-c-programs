#include <stdlib.h>
#include <stdio.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create()
{
  struct node *newnode;
  newnode = malloc(sizeof(struct node));
  printf("Enter data: ");
  scanf("%d",&newnode->data);
  newnode->next = NULL;
  int ch;
  printf("Enter 0 to STOP, 1 to CONTINUE: ");
  scanf("%d",&ch);
  if (ch)
  {
    newnode->next = create();
    return newnode;
  }
  else
  {
    return newnode;
  } 
}
void display(struct node *start)
{
  if (start == NULL)
  {
    return;
  }
  printf("%d ",start->data);
  display(start->next);
}
void sort(struct node *start)
{
  struct node *i,*j;
  int min;
  for (i=start;i->next != NULL;i=i->next)
  {
    for (j=i->next;j!=NULL;j=j->next)
    {
      if (i->data > j->data)
      {
        int temp = i->data;
        i->data = j->data;
        j->data = temp;
      }
    }
  }
}
int main()
{
  struct node *head;
  head = create();
  printf("Before Sorting: ");
  display(head);
  sort(head);
  printf("After Sorting: ");
  display(head);

B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B
B

