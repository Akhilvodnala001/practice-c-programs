#include <stdio.h>
int main()
{
int a;
int b;
int c;
int d;
int e;
int std;
char name[50];
printf("Enter the name of the student: ");
scanf("%s",&name);
printf("Enter the marks in the a subject: ");
scanf("%d",&a);
printf("Enter the marks in the b subject: ");
scanf("%d",&b);
printf("Enter the marks in the c subject: ");
scanf("%d",&c);
printf("Enter the marks in the d subject: ");
scanf("%d",&d);
printf("Enter the marks in the e subject: ");
scanf("%d",&e);

printf("Enter the standard marks in each subject: ");
scanf("%d",&std);

float T = a+b+c+d+e;
float Tstd = std*5;
float per = (T/Tstd)*100;
printf("The percentage obtained by %s is %0.1f",name,per);

}
