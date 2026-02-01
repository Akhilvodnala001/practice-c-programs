#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head1;
struct node *head2;
struct node *head3;
struct node *create()
{
  struct node *newnode;
  newnode = malloc(sizeof(struct node));
  printf("Enter data: ");
  scanf("%d",&newnode->data);
  newnode->next = NULL;
  int ch;
  printf("0 to STOP, 1 to CONTINUE: ");
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
  if (start!=NULL)
  {
    return;
  }
  printf("%d ",start->data);
  display(start->next);
}
void join(struct node *s1,struct node *s2,struct node *s3)
{
  while(s1->next!=NULL)
  {
    s1 = s1->next;
  }
  s1->next = s2;
  while(s3->next!=NULL)
  {
    s3 = s3->next;
  }
  s3->next = s2;
}
struct node *findjoin(struct node *s1,struct node *s3)
{
  while (s1!=s3)
  {
    s1 = s1->next;
    s3 = s3->next;
  }
  return s1;
}
int main()
{
  head1 = create();
  head2 = create();
  head3 = create();
  join(head1,head2,head3);
  struct node *j;
  j = findjoin(head1,head3);
  printf("1st common node: %d\n",j->data);
}
