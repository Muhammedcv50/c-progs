#include<stdio.h>
void main()
{
 int a,b,s,d,t;
 printf("Enter the first  number - ");
 scanf("%d",&a);
 printf("Enter the second number - ");
 scanf("%d",&b);
 t=0;
 while(a>0)
 {
  d=a%10;
  t=t*10+d;
  a=a/10;
  }
  a=t;
  t=0;
 while(b>0)
 {
  d=b%10;
  t=t*10+d;
  b=b/10;
  }
  b=t;
  printf("%d + %d = %d\n",a,b,a+b);
  }
  
  
