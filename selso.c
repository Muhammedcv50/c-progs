#include<stdio.h>
void main()
{
 int i,n,s,j,temp,a[20];
 printf("Enter the no of elements -" );
 scanf("%d",&n);
 printf("Enter the elements\n");
 for(i=0;i<n;i++)
  {
   printf("->");
   scanf("%d",&a[i]);
  }
  printf("Array is ");
 for(i=0;i<n;i++)
  {
   printf("%d,",a[i]);
  }
 for(i=0;i<n;i++)
  {
  for(j=i;j<n;j++)
   {
    if(a[j]<a[i])
    {temp=a[j];
     a[j]=a[i];
     a[i]=temp;
    }
   }
  }
 printf("\nSorted array is - \n");
for(i=0;i<n;i++)
  {
   printf("%d,",a[i]);
  }  
 } 
