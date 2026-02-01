#include <stdio.h>
#include <string.h>
char str[20];
char stack[20];
int top = -1;
void push(char ch)
{
  if (top == 19)
  {
    printf("STACK OVERFLOW\n");
  }
  else
  {
    stack[++top] = ch;
  }
}
char pop()
{
  if (top == -1)
  {
    printf("STACK UNDERFLOW!\n");
  }
  else
  {
    return stack[top--];
  }
}
int main()
{
  strcpy(str,"Akhilsai");
  for (int i = 0;i<strlen(str);i++)
  {
    push(str[i]);
  }
  for (int i = 0;i<strlen(str);i++)
  {
    str[i] = pop();
  }
  printf("Reversed string is %s\n",str);

}
