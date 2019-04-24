#include<stdio.h>
void main()
{
 int a,b,c,big;
 printf("Enter the numbers - ");
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 big=a;
 if (b>big)
  big=b;
 if (c>big)
  big=c;
 printf("Largest no is %d \n",big);
 } 
