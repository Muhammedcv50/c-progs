#include<stdio.h>
main()
{
 int a,f,i;
 printf("Enter the number - ");
 scanf("%d",&a);
 f=1;
 for(i=1;i<=a;i++)
 {
  f*=i;
 }
 printf("Factorial is %d \n",f);
 } 
