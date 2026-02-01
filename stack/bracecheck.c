#include <stdio.h>
#include <string.h>
char stack[50];
int top = -1;
void push(char ch)
{
  if (top == 48)
  {
    printf("STACK OVERFLOW!\n");
  }
  else
  {
    top++;
    stack[top] = ch;
  }
}
char pop()
{
  if (top == -1)
  {
    printf("Underflow!\n");
  }
  else
  {
    return stack[top--];
  }
}
int main()
{
  char str[50];
  strcpy(str,"{}{");
  int i,j;
  for (i=0;i<strlen(str);i++)
  {
    if (str[i] == '{' || str[i] == '[' || str[i] == '(')
    {
      push(str[i]);
    }
    else if (str[i] == '}' || str[i] == ']' || str[i] == ')')
    {
      char temp = pop();
      if (!((temp == '{' && str[i] == '}')||(temp == '[' && str[i] == ']')||(temp == '(' && str[i] == ')')))
      {
        printf("Invalid braces!");
        return 0;
      }
    }
  }
  if (top == -1)
  {
    printf("Valid braces!");
  }
  else
  {
    printf("Invalid braces!");
  } 
}
