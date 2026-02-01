#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int d)
{
  struct node *newnode;
  newnode = malloc(sizeof(struct node));
  newnode->data = d;
  if (front == NULL)
  {
    front = rear = newnode;
    rear->next = front;
  }
  else
  {
    rear->next = newnode;
    rear = newnode;
    rear->next = front;
  }
}
void dequeue()
{
  if (front == NULL) 
  {
    printf("UNDERFLOW!\n");
  }
  else if(front == rear)
  {
    front = rear = NULL;
  }
  else
  {
    rear->next = front->next;
    free(front);
    front = rear->next;
  }
}
void display()
{
  if (front == NULL || rear == NULL)
  {
    printf("UNDERFLOW!\n");
  }
  else
  {
    struct node *temp = front;
    while (temp!=rear)
    {
      printf("%d ",temp->data);
      temp = temp->next;
    }
    printf("%d \n",temp->data);
    temp = temp->next;
  }
}
void Front()
{
  if (front == NULL)
  {
    printf("UNDERFLOW!\n");
  }
  else
  {
    printf("Front element is %d\n",front->data);
  }
}
int main()
{
  int ch,x;
  do
  {
    printf("0.TERMINATE\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY ALL\n4.DISPLAY FRONT\nChoose from the above: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 0: break;
      case 1: printf("Enter data:");
              scanf("%d",&x);
              enqueue(x);
              break;
      case 2: dequeue();
              break;
      case 3: display();
              break;
      case 4: Front();
              break;
      default: printf("Invalid input!\n");
    }
  }while(ch);

}
