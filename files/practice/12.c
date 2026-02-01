#include <stdio.h>
#define N 5
int main()
{
  int i,num;
  FILE *fp = NULL;
  fp = fopen("integerdata.bin","wb");
  if (fp == NULL)
  {
    printf("Error Opening File!\n");
    return 0;
  }
  printf("Enter the Integer data: ");
  for (i=0;i<N;i++)
  {
    scanf("%d",&num);
    fwrite(&num,sizeof(int),1,fp);
  }
  fclose(fp);
  fp = fopen("integerdata.bin","rb");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  if (fread(&num,sizeof(int),1,fp)!=1)
  {
    printf("File empty!\n");
    return 0;
  }
  int min,max;
  min = max = num;
  while (fread(&num,sizeof(int),1,fp))
  {
    if (num>max)
    {
      max = num;
    }
    if (num<min)
    {
      min = num;
    }
  }
  fclose(fp);
  printf("Largest number in the file: %d\n",max);
  printf("Smallest number in the file: %d\n",min);
}
