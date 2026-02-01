#include <stdio.h>
#include <string.h>
int find_indexF(char [],char []);
int find_indexL(char [],char []);
int main()
{
  char str1[100];
  printf("Enter the string:1: ");
  fgets(str1,sizeof(str1),stdin);
  str1[strcspn(str1,"\n")]='\0';
  
  char str2[100];
  printf("Enter the string-2: ");
  fgets(str2,sizeof(str2),stdin);
  str2[strcspn(str2,"\n")]='\0';
  
  int result1;
  int result2;
  
  result1 = find_indexF(str1,str2);
  result2 = find_indexL(str1,str2);
  if (result1==-1)
  {
    printf("Not Found!");
  }
  else
  {
    printf("index of first occurrence of string-2 in string-1 is %d\n",result1);
  }
  if (result2 != -1)
  {
    printf("index of last occurrence of string-2 in string-1 is %d\n",result2);
  }
  

}
int find_indexF(char str1[],char str2[])
{
  char *word1;
  char *word2;
  char copy1[100];
  char copy2[100];
  
  char *words[strlen(str1)];
  
  int wordcount=0;
  strcpy(copy1,str1);
  strcpy(copy2,str2);
  if (strlen(copy1)<strlen(copy2))
  {
    return -1;
  }
  word1 = strtok(copy1," ");
  while (word1!=NULL)
  {
    words[wordcount++] = word1;
    word1 = strtok(NULL," ");
  }
  int i;
  word2=strtok(copy2," ");
  for (i=0;i<wordcount;i++)
  {
    if (strcmp(words[i],word2) == 0)
    {
      return i;
    }
  } 
}
int find_indexL(char str1[],char str2[])
{
  char *word1;
  char *word2;
  char *words[strlen(str1)];
  int wordcount = 0;
  
  if (strlen(str1)<strlen(str2))
  {
    return -1;
  }
  
  word1 = strtok(str1," ");
  while (word1!=NULL)
  {
    words[wordcount++] = word1;
    word1 = strtok(NULL," ");
  }
  word2 = strtok(str2," ");
  int i;
  int index;
  for (i=0;i<wordcount;i++)
  {
    if (strcmp(words[i],word2) == 0)
    {
      index = i;
    }
  }
  return index;
}
