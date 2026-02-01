#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create(void)
{
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  struct node *head = newnode;// To Create a loop
  printf("Enter the data: ");
  scanf("%d",&newnode->data);
  int choice;
  printf("1 to Continue, 0 to Stop: ");
  scanf("%d",&choice);
  if (choice)
  {
    newnode->next = create();
  }
  else
  {
    newnode->next = head;
    return newnode;
  }
  return newnode;
}
int detectloop(struct node *start)
{
  struct node *slow = start;
  struct node *fast = start;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
    {
      return 1;
    }
  }
  return 0;
}
struct node *removeloop(struct node *start)
{
  struct node *slow = start;
  struct node *fast = start;
  while (fast != NULL && fast->next != NULL)
  { 
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
    {
      slow = start;
      while (slow != fast->next)
      {
        slow = slow->next;
        fast = fast->next;
      }
      fast->next = NULL;
    }
  }
  return start;
}
void printnode(struct node *start)
{
  struct node *temp = start;
  int pos;
  printf("Enter the node position: ");
  scanf("%d",&pos);
  int i = 1;
  while (temp!=NULL)
  {
    if (i == pos)
    {
      printf("%d ",temp->data);
      return;
    }
    i++;
    temp = temp->next;
  }
  printf("Invalid node position!\n");
}
void print_node(struct node *start)
{
  struct node *temp = start;
  while (temp != NULL)
  {
    printf("%d ",temp->data);
    temp = temp->next;
  } 
  return;
}
struct node *sort(struct node *start)
{
  struct node *i,*j;
  for (i=start;i!=NULL;i=i->next)
  {
    for (j=i->next;j!=NULL;j=j->next)
    {
      if ((i->data) > (j->data))
      {
        int temp = (i->data);
        (i->data) = (j->data);
        (j->data) = temp;
      }
    }
  }
  return start;
  
}
int main()
{
  struct node *head;
  head = create();
  int detect;
  detect = detectloop(head);
  if (detect)
  {
    printf("Loop Found!\n");
    head = removeloop(head);
    print_node(head);
  }
  else
  {
    printf("Loop not Found!");
  }
  printnode(head); //To print 1 node
  printf("Entered linked list is ");
  print_node(head);
  head = sort(head);
  printf("\nLinked list sorted in ascending order: ");
  print_node(head);
} 
