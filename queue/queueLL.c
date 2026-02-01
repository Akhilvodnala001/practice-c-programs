#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int x)
{
  struct node *newnode;
  newnode = malloc(sizeof(struct node));
  newnode->data = x;
  newnode->next = NULL;
  if (front == NULL && rear == NULL)
  {
    front = rear = newnode;
  }
  else
  {
    rear->next = newnode;
    rear = newnode;
  }
}
void dequeue()
{
  if (front == NULL && rear == NULL)
  {
    printf("UNDERFLOW!\n");
  }
  else if(front == rear)
  {
    front = rear = NULL;
  }
  else
  {
    struct node *temp = front;
    front =  front->next;
    free(temp);
  }
}
void Front()
{
  if(front == NULL && rear == NULL)
  {
    printf("UNDERFLOW!\n");
  }
  else
  {
    printf("Front element is %d\n",front->data);
  }
}
void display()
{
  if (front == NULL && rear == NULL)
  {
    printf("UNDERFLOW!\n");
  }
  else
  {
    struct node *temp = front;
    while (temp!=NULL)
    {
      printf("%d ",temp->data);
      temp = temp->next;
    }
    printf("\n");
  }
}
int main()
{
  int ch,x;
  do
  {
    printf("0.TERMINATE\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY ALL\n4.DISPLAY FRONT\nChoose from the above options: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 0: break;
      case 1: printf("Enter data: ");
              scanf("%d",&x);
              enqueue(x);
              break;
      case 2: dequeue();
              break;
      case 3: display();
              break;
      case 4: Front();
              break;
    }
  }while(ch);
  return 0;
}
