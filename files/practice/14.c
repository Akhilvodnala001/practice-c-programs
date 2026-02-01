#include <stdio.h>
int main()
{
  FILE *fp = NULL;
  fp = fopen("file2.txt","r");
  char line[100];
  int total = 1;
  while (fgets(line,sizeof(line),fp))
  {
    total++;
  }
  rewind(fp);
  int N;
  printf("How many line do you wanna print at last: ");
  scanf("%d",&N);
  int start;
  if (N<0)
  {
    start = 0;
  }
  else
  {
    start = total - N;
  }
  int i = 1;
  while (fgets(line,sizeof(line),fp)!= NULL)
  {
    if (i>=start)
    {
      printf("%s",line);
    }
    i++;
  }
  fclose(fp);

}
