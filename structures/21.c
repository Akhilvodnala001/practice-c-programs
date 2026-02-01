#include <stdio.h>
#pragma pack(1)
struct books
{
  char title[30];
  char author[30];
  long int ISBN;
  int pages;
};
void input(struct books *b)
{
  printf("Enter the book title: ");
  scanf("%s",b->title);
  printf("Author of the book: ");
  scanf("%s",b->author);
  printf("Enter the ISBN of the book: ");
  scanf("%ld",&b->ISBN);
  printf("Enter the no.of pages: ");
  scanf("%d",&b->pages);
}
void display(struct books *d)
{
  printf("\nTitle: %s\n",d->title);
  printf("Author name: %s\n",d->author);
  printf("ISBN: %ld\n",d->ISBN);
  printf("Pages: %d\n",d->pages);
}
int main()
{
  struct books book1;
  input(&book1);
  display(&book1);
}
