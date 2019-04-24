
#include<stdio.h>
void main()
{
 int n,b,i,j;
 char r,m[20];
 printf("Enter the number - ");
 scanf("%d",&n);
 printf("Enter the base - ");
 scanf("%d",&b);
 i=0;
 while(n>=0)
 {
  r=n%b;
  if (r>=0&&r<=9)
    {
     r=n;
     r=r+'0';
     }
 else
    {    
     r=n-10;
     r=r+'A';
    }
  m[i++]=r;
  n/=b;
 }
 
 printf("Number in base %d is - ",b);
 for(j=(i-1);j>=0;j--)
   printf("%c",m[j]);
}
  
