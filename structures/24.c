#include <stdio.h>
struct complex
{
  float real;
  float img;
};
struct complex add(struct complex *p1,struct complex *p2)
{
  struct complex sum;
  sum.real = p1->real + p2->real;
  sum.img = p1->img + p2->img;
  return sum;
}
int main()
{ 
  struct complex c1,c2;
  printf("Enter the real part of 1st complex number: ");
  scanf("%f",&c1.real);
  printf("Enter the img part of 1st complex number: ");
  scanf("%f",&c1.img);
  printf("Enter the real part of 2nd complex number: ");
  scanf("%f",&c2.real);
  printf("Enter the img part of 2nd complex number: ");
  scanf("%f",&c2.img);
  struct complex s = add(&c1,&c2);
  printf("The sum of complex number-1 and complex number-2 is %0.1f + %0.1fi",s.real,s.img);
  
  
}
