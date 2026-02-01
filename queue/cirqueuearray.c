#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x)
{
  if (front == -1 && rear == -1)
  {
    front = rear = 0;
    queue[rear] = x;
  } 
  else if((rear+1)%N == front)
  {
    printf("OVERFLOW!\n");
  }
  else
  {
    rear = (rear+1)%N;
    queue[rear] = x;
  }
}
void dequeue()
{
  if (front == -1 && rear == -1)
  {
    printf("UNDERFLOW!\n");
  }
  else
  {
    front = (front+1)%N;
  }
}
void display()
{
  if (front == -1 && rear == -1)
  {
    printf("UNDERFLOW!\n");
  } 
  else
  {
    int i = front;
    while(i!=rear)
    {
      printf("%d ",queue[i]);
      i = (i+1)%N;
    }
    printf("%d \n",queue[i]);
  }
}
void Front()
{
  if (front == -1 && rear == -1)
  {
    printf("UNDERFLOW!\n");
  }
  else
  {
    printf("The front element is %d\n",queue[front]);
  }
}
int main()
{
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  enqueue(5);
  display();
  dequeue();
  display();
  enqueue(1);
  display();
  Front();

}
