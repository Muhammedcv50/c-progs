#include<stdio.h>
void main()
{
int a,m,j,fact,n;
printf("Enter the upper limit - ");
scanf("%d",&m);
printf("Enter the lower limit - ");
scanf("%d",&n);
a=m;
while(a<=n)
 {
  fact=0;
  for(j=1;j<=a;j++)
  {
   if(a%j==0)
     fact+=1;
  }
  if (fact==2)
      {printf("%d\n",a);
      }
    a++;
  }
  }
    
