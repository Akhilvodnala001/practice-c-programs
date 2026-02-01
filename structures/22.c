#include <stdio.h>
union data
{
  float cm;
  float feet;
  float inch;
};
int convert(union data *p,int a)
{
  int x;
  printf("\nEnter the product units to be converted to(cm-0,feet-1,inch-2) ");
  scanf("%d",&x);
  if (a == x)
  {
    printf("Units are same!");
    return 0;
  }
  else if ((a == 0) && (x==1))
  {
    p->feet = (p->cm)/30.48;
    return 4;
  }
  else if((a==0) && (x == 2))
  {
    p->inch = ((p->cm)/2.54);
    return 5;
  }
  else if ((a==1) && (x == 0))
  {
    p->cm = 30.48*(p->feet);
    return 3;
  }
  else if ((a == 1) && (x == 2))
  {
    p->inch = (p->feet) * 12;
    return 5;
  }
  else if ((a == 2) && (x == 1))
  {
    p->feet = (p->inch)/12;
    return 4;
  }
  else if ((a == 2) && (x == 0))
  {
    p->cm = (p->inch)*2.54;
    return 3;
  }
  
  
}
int main()
{
  int n;
  union data num;
  printf("Enter your choice of input:(cm-0,feet-1,inch-2) ");
  scanf("%d",&n);
  printf("\n");
  if (n == 0)
  {
    printf("Enter the size of product in cm: ");
    scanf("%f",&num.cm);
  }
  else if (n == 1)
  {
    printf("Enter the size of product in feet: ");
    scanf("%f",&num.feet);
  }
  else if (n == 2)
  {
    printf("Enter the size of product in inches: ");
    scanf("%f",&num.inch);
  }
  else
  {
    printf("Invalid input!");
    return 0;
  }

  int r;
  r = convert(&num,n);
  
  if (r == 3)
  {
    printf("\nThe converted value is %0.1f cm\n",num.cm);
  }
  else if(r == 4)
  {
    printf("\nThe converted value is %0.1f feet\n",num.feet); 
  }
  else if (r == 5)
  {
    printf("\nThe converted value is %0.1f inch\n",num.inch);
  }
  else
  {
    return 0;
  } 
  

}
