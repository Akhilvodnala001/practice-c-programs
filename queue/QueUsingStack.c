#include <stdio.h>
#define N 5
int s1[N],s2[N];
int top1 = -1;
int top2 = -1;
int count = 0;
void push1(int d)
{
  s1[++top1] = d;
}
void push2(int d)
{
  s2[++top2] = d;
}
int pop1()
{
  return s1[top1--];
}
int pop2()
{
  return s2[top2--];
}
void enqueue(int d)
{
  if (top1==N-1)
  {
    printf("OVERFLOW!\n");
  }
  else
  {
    push1(d);
    count++;
  }
}
void dequeue()
{
  if (top1 == -1)
  {
    printf("UNDERFLOW!\n");
  }
  else
  {
    int i;
    for (i=0;i<count;i++)
    {
      int a = pop1();
      push2(a);
    }
    pop2();
    count--;
    for (i=0;i<count;i++)
    {
      int b = pop2();
      push1(b);
    }
  }
}
void display()
{
  if (top1 == -1)
  {
    printf("UNDERFLOW!\n");
  } 
  else
  {
    for (int i=0;i<=top1;i++)
    {
      printf("%d ",s1[i]);
    }
  }
}
int main()
{
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  enqueue(5);
  printf("Before Deletion: ");
  display();
  dequeue();
  dequeue();
  printf("After Deletion: ");
  display();
}
