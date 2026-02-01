#include <stdio.h>
#include <string.h>
int main()
{
char alpha[20];
int i;
printf("Enter the elements of the string: ");
fgets(alpha,sizeof(alpha),stdin);
int n = strlen(alpha);
int count=0;
for (i=0;i<n;i++)
{
  if(alpha[i]=='a' || alpha[i]=='e'|| alpha[i]=='i'|| alpha[i]=='o'|| alpha[i]=='u'|| alpha[i]=='A'|| alpha[i]=='E'|| alpha[i]=='I'|| alpha[i]=='O'|| alpha[i]=='U')
  {
    count++;
  }
}
printf("No.of vowels in the string is %d",count);
}
