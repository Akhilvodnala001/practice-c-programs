#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create()
{ 
  int choice;
  printf("Enter your choice: ");
  scanf("%d",&choice);
  if (choice == 0)
  {
    return 0;
  } 
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter the data: ");
  scanf("%d",&newnode->data);
  newnode->next = create();
  return newnode;
}
void find(struct node *start,int *smallest,int *largest)
{
  struct node *temp;
  temp = start;
  temp = temp->next;
  while (temp!=NULL)
  {
    if (temp->data < *smallest)
    {
      *smallest = temp->data;
    }
    if (temp->data > *largest)
    {
      *largest = temp->data;
    }
    temp = temp->next;
  }
}

void deallocation(struct node **start)
{
  if (*start == NULL)
  {
    return;
  }
  deallocation(&((*start)->next));
  free(*start);
}

int main()
{
  struct node *list;
  list = create();
  int smallest,largest;
  smallest = largest = list->data;
  find(list,&smallest,&largest);
  printf("Largest = %d\n",largest);
  printf("Smallest = %d",smallest);
  deallocation(&list);
}
