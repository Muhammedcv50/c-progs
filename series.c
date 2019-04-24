#include<stdio.h>

int fact(float a)
{
 if(a<2)
  return 1;
 else
  return a*fact(a-1);
 }
 
 float* fib(int n)
  {
    float a,b,c,d[20];
    int i;
	a=0;
	b=1;

	for(i=0;i<n-1;i++)
	 {
	  c=a+b;
	  d[i]=c;
	  a=b;
	  b=c;
	 }

	return d;  
  }
  
   float po(int x,int n)
  {
    int i;
    float r=1;
    for(i=0;i<n;i++)
    {
     r*=x;
    }
     return r;
  }
 
void main()
{

 int n,op,x;
 float s,t,i;
 printf("Enter the no of terms -" );
 scanf("%d",&n);
 printf(" \n\n 1. 1 - (x^2)/2! + (x^4)/4!....\n\n 2. 1 - x/1! +(x^2)/2! .....\n\n Choose any series - ");
 scanf("%d",&op);
 printf("\nEnter x  -" );
 scanf("%d",&x);
 
 if (op==1)
 {
  s=0;
  t=1;
  for(i=1;i<=n;i++)
  {
   s+=t;
   t=t*((-1)*(x)*x/(((2*i)-1)*2*i));
   
  }
  printf("\nSum of series  = %f\n",s);
 } 
 else if (op==2)
 {
  int i;
  float* d=fib(n);
  	for(i=0;i<n-1;i++)
  {
	printf("%f,",d[i]);
  }
  s=0;
  t=1;
  for(i=1;i<=n;i++)
  {
   s+=t;
   t=t*((-1)*(po(x,d[i-1]))/fact(d[i-1]));
  
  }
  printf("\nSum of series  = %f\n",s);
 }

}


