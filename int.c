#include<stdio.h>
#define sim(a,b,c) a*b*c/100
void main()
{
 float p,r,t,in;
 printf("Enter the principal amount - ");
 scanf("%f",&p);
 printf("Enter the interest rate per year (%) - ");
 scanf("%f",&r);
 printf("Enter the no of years - ");
 scanf("%f",&t);
 in=sim(p,r,t);
 printf("Interest is %f\n",in);
}
 
