#include <stdio.h>
int main()
{
  int count = 0;
  int i = 0;
  char name[30];
  fgets(name,sizeof(name),stdin); //Length will be no.of visible characters + 1...
  //scanf("%s",&name); //Length will be no.of visible characters...
  while (name[i]!='\0')
  {
    count++;
    i++;
  }
  printf("The length of %s will be %d",name,count);
}
