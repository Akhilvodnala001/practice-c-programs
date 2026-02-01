#include <stdio.h>
int main()
{
  int num;
  FILE *fp = fopen("/home/Akhil/practice/files/practice/numsum.txt","r");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  int k;
  int sum = 0;
  char ch;
  while (fscanf(fp,"%d",&num) == 1)
  {
    sum = sum + num;
  }
  fclose(fp);
  FILE *fptr = NULL;
  fptr = fopen("/home/Akhil/practice/files/practice/2Destination.txt","w");
  if (fptr == NULL)
  {
    printf("Error Opening destination file!\n");
    return 0;
  }
  fprintf(fptr,"%d",sum);
  fclose(fptr);
}
