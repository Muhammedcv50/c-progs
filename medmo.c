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
  printf("\n\nMedian is %d\n\n",a[(n/2)]); 
  
 
  
   
 int occ[20],nos[20]; 
 int k,c,q=0,flag;
   
 for(i=0;i<n;i++)
 {
  c=0;
  flag=1;
  for(k=0;k<i;k++)
   {if(a[i]==a[k])
     flag=0;}
  if(flag!=0)
  {   
   for(j=i;j<n;j++) 
     if (a[i]==a[j])
       c++;
   occ[q]=c;
   nos[q]=a[i];
   q=q+1;
  }
  
  }
  
  
   
  printf("Mod - ");
  big = occ[0];
  for(i=1;i<q;i++)
   if(big<occ[i])
       big=occ[i];
  
  for(i=0;i<q;i++) 
      if(big==occ[i])
         printf("%d,",nos[i]);
         
   printf("\n");
         
         
}
       
    
   
 
  
  
  
