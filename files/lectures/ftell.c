#include <stdio.h>
int main()
{
  FILE *fp = NULL;
  fp = fopen("/home/Akhil/practice/files/sample.txt","r");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  printf("Current position of cursor is %ld\n",ftell(fp));
  char str[10];
  fscanf(fp,"%s",str);
  printf("%s\n",str);
  //fseek(fp,6,SEEK_SET);
  printf("Current position of cursor is %ld\n",ftell(fp));
  fscanf(fp,"%s",str);
  printf("%s\n",str);
  printf("Current position of cursor is %ld\n",ftell(fp));
}
