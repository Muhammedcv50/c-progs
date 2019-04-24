#include<stdio.h>
void main()
{
 int i,n,s,j,temp,a[20],big=0,no[10];
 float med,m,nq;
 printf("Enter the no of elements -" );
 scanf("%d",&n);
 printf("Enter the elements\n");
 for(i=0;i<n;i++)
  {
   printf("->");
   scanf("%d",&a[i]);
  }
  printf("\nSorted list  is ");
 
 for(i=0;i<n;i++)
 {
  for(j=i;j<n;j++)
   {
    if(a[j]<a[i])
    {temp=a[j];
     a[j]=a[i];
     a[i]=temp;
   }}
 }
 for(i=0;i<n;i++)
  {
   printf("%d,",a[i]);
  }  
 if(n%2==0)
  {m=a[n/2];
   nq=a[(n/2)-1];
   med=((nq+m)/2.0);
   printf("\nMedian is %f ",med);}
 else
  printf("\nMedian is %d ",a[(n/2)]); 
  
 
  
 }  
 
  
  
  
