#include <stdio.h>
#include <string.h>
void fun(char *str,int *x,int *y)
{
  while ((*str)!='\0')
  {
    if (((*str)>=65 && (*str)<=90) || ((*str)>=97 && (*str)<=122)) 
    {
      if ((*str) =='a' || (*str)=='e' || (*str)=='i' || (*str)=='o' || (*str)=='u' || (*str)=='A' || (*str)=='E' || (*str)=='I' || (*str)=='O' || (*str)=='U')
      {
        (*x)++;
      }
      else
      {
        (*y)++;
      }
    }
    str++;
  }

}
int main()
{
  int vowel = 0,consonant = 0;
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  fun(str,&vowel,&consonant);
  printf("Vowels:%d\n",vowel);
  printf("Consonants:%d\n",consonant);

}
