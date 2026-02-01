#include <stdio.h>
#define N 3
struct node
{
  int rollno;
  char name[20];
  float marks;
};
int main()
{
  FILE *fp = NULL;
  fp = fopen("studentdata.bin","rb");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  struct node p[N];
  fread(p,sizeof(struct node),N,fp);
  fclose(fp);
  fp = fopen("copystudentdata.bin","wb");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  fwrite(p,sizeof(struct node),N,fp);
  fclose(fp);
  struct node s[N];
  fp = fopen("copystudentdata.bin","rb");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  fread(s,sizeof(struct node),N,fp);
  int i;
  for (i=0;i<N;i++)
  {
    printf("STUDENT-%d\n",i+1);
    printf("Name: %s\n",s[i].name);
    printf("RollNo: %d\n",s[i].rollno);
    printf("Marks: %0.1f\n",s[i].marks);
  }
  fclose(fp);
}
