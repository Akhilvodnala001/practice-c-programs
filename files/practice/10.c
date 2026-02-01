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
  struct node s[N];
  int i;
  for (i=0;i<N;i++)
  {
    printf("ENTER STUDENT-%d DETAILS\n",i+1);
    printf("RollNo: ");
    scanf("%d",&s[i].rollno);
    printf("Name: ");
    scanf("%s",s[i].name);
    printf("Marks: ");
    scanf("%f",&s[i].marks);
  }
  FILE *fp = NULL;
  fp = fopen("studentdata.bin","wb");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  fwrite(s,sizeof(struct node),N,fp);
  fclose(fp);
  fp = fopen("studentdata.bin","rb");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  struct node k[N];
  printf("\n\n");
  fread(k,sizeof(struct node),N,fp);
  for (i=0;i<N;i++)
  {
    printf("STUDENT-%d DATA: \n",i+1);
    printf("Name: %s\n",k[i].name);
    printf("Roll.No: %d\n",k[i].rollno);
    printf("Marks: %0.1f\n\n",k[i].marks);
  }
  fclose(fp);
}
