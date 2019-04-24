#include<stdio.h>
void main()
{
 int a[20];
 int k,mid,i,first,last,n,f=0;
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
 printf("\nEnter the element to be searched - "); 
 scanf("%d",&k);
 first=0;
 last=n-1;
 mid=(first+last)/2;
 while(first<=last)
 {
  if(a[mid]<k)
  {
   first=mid+1;
   mid=(first+last)/2;
  }
  else if(a[mid]>k)
  {
   last=mid-1;
   mid=(first+last)/2;
  }
  else
  {
   f=1;
   printf("Item found at position %d\n",mid+1);
   break;
  }
 }
 if(f==0)
 {
  printf("Item not found\n");
 }
 }
