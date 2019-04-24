/*To find mean*/

#include<stdio.h>
void main()
{
	int *ptr,n,sum=0,mean,i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int arr[n];
	ptr=arr;
	printf("Enter the numbers :- ");
	for(i=0;i<n;i++)
		{
			scanf("%d",&(*(ptr+i)));
			sum=sum+*(ptr+i);
		}
	mean=sum/n;
	printf("\nThe mean is : %d\n",mean);
}
