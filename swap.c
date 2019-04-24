#include<stdio.h>
void main()
{
 int *ptr1,*ptr2,*c,a,b;
 printf("\nEnter value for a -");
 scanf("%d",&a);
 printf("\nEnter value for b -");
 scanf("%d",&b);
 ptr1=&a;
 ptr2=&b;
 *c=*ptr1;
 *ptr1=*ptr2;
 *ptr2=*c;
 printf("\nValue of a -%d\n",a);
 printf("\nValue of b -%d\n",b);
 }
