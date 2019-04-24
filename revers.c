#include<stdio.h>
main()
{
 int n,d,a,s;
 printf("Enter the number - ");
 scanf("%d",&n);
 s=0;
 a=0;
 while(n>0)
 {
  d=n%10;
  s+=d;
  a=a*10+d;
  n=n/10;
  }
 
 printf("sum is %d \n",s);
 printf("reversed no is %d \n",a);
 } 
