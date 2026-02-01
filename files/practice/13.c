#include <stdio.h>
int main()
{
  FILE *fp = NULL;
  fp = fopen("file1.txt","r");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  fseek(fp,0,SEEK_END);
  int size = ftell(fp);
  printf("Size of the file is %d\n",size);
  fclose(fp);

}
