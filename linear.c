#include<stdio.h>
void main()
{
 int a[20];
 int k,i,n;
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
 for(i=0;i<n;i++)
  {
   if(a[i]==k)
   {
    printf("Item found at position %d \n",i+1);
    break;
   }
   else if(i==(n-1))
    printf("Item not found \n");
    }
}
