#include <stdio.h>
int main()  
{
int n,a=0,b=1,c,i=1;
printf("Enter the no of terms: ");
scanf("%d",&n);
while(i<=n)
{
printf("%d\n",a);
c=a+b;  //Calculate next term 
a=b;    //a becomes b 
b=c;    //b becomes c i.e, next term 
i++;
}
}
