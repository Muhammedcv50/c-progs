
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
 while(n>0)
 {
  r=n%b;
  if (r>=0&&r<=9)
    {
    
     r=r+'0';
     }
  else
    { 
    
     r=r-10+'A';
    }

  m[i]=r;
  i=i+1;
  n=n/b;
 }
 
 printf("Number in base %d is - ",b);
 for(j=(i-1);j>=0;j--)
   printf("%c",m[j]); 
   
  printf("\n");
}
  
