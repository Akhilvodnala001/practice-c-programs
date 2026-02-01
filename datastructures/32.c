#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create()
{
  struct node *head;
  head = (struct node*)malloc(sizeof(struct node));
  head->data = 0;
  head->next = NULL;
  int choice = 1;
  struct node *temp = NULL;
  while(choice)
  {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if (temp == NULL)
    {
      head->next = temp = newnode;
    }
    else
    {
      temp->next = newnode;
      temp = temp->next;
    }
    head->data++;
    printf("1 to Continue, 0 to Stop: ");
    scanf("%d",&choice);
  }
  return head;
} 
void display(struct node *head)
{
    if (head == NULL)
    {
        return;
    }

    printf("No.of nodes: %d\n", head->data);

    struct node *temp = head->next;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void splitdisplay(struct node *start)
{
  while (start != NULL)
  {
    printf("%d ",start->data);
    start = start->next;
  }
  return;
}

void evenodd(struct node *head,struct node **even,struct node **odd)
{
  if (head == NULL)
  {
    (*even) = NULL;
    (*odd) = NULL;
    return;
  }
  if (head->data % 2 == 0)
  {
    (*even) = head;
    evenodd(head->next,&((*even)->next),odd);
  }
  else
  {
    (*odd) = head;
    evenodd(head->next,even,&((*odd)->next));
  }
}
int main()
{
  struct node *head;
  head = create();
  display(head);
  struct node *even;
  struct node *odd;
  evenodd(head->next,&even,&odd);
  printf("Even linked-list: ");
  splitdisplay(even);
  printf("\nOdd Linked-list: ");
  splitdisplay(odd);
}
