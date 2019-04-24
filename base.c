#include<stdio.h>
void main()
{
 int n,a[100],i,j,r,b;
 printf("Enter number in decimal-");
 scanf("%d",&n);
 printf("Enter base -");
 scanf("%d",&b);
 r=1;
 i=0;
 while(n>0)
 {r=n%b;
  printf("\n%d - ",r);
  n=n/b;
  a[i]=r;
  i+=1;
 }
  printf("\nNumber in base %d - ",b);
 for(j=(i-1);j>=0;j--)
   printf("%d",a[j]);
 printf("\n");  
 }   
  
