#include <stdio.h>
#define n 5
int queue[n];
int front = -1;
int rear = -1;
void enqueue(int x)
{
  if (rear == n-1)
  {
    printf("Overflow!\n");
    return;
  }
  else if (front == -1 && rear == -1)
  {
    front = rear = 0;
    queue[rear] = x;
    return;
  }
  else
  {
    queue[++rear] = x;
    return;
  }
}
void dequeue()
{
  if (front == -1 && rear == -1)
  {
    printf("Underflow!\n");
  }
  else if (front == rear)
  {
    front = rear = -1;
  }
  else
  {
    front++;
  }
}
void display()
{
  if (front == -1 && rear == -1)
  {
    printf("Underflow!\n");
  }
  else
  {
    printf("QUEUE is ");
    for (int i = front;i<=rear;i++)
    {
      printf("%d ",queue[i]);
    }
    printf("\n");
  }
}
void Front()
{
  if (front == -1 && rear == -1)
  {
    printf("Underflow!\n");
  }
  else
  {
    printf("The front element is %d\n",queue[front]);
  }
}
int main()
{
  int ch,x;
  do
  {
    printf("1.ENQUEUE\n2.DEQUEUE\n3.Display all elements\n4.Display front element\n0.Terminate\nChoose from the above options: ");
    scanf("%d",&ch);
    switch(ch)
    {
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
      case 0: break;
      default: printf("Invalid input!");
    }
  }while(ch!=0);
}
