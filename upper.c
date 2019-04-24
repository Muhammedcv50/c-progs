#include<stdio.h>
void main()
{
 int s=1;
 int i,j,m,n;
 int a[10][10];
 printf("Enter the no of rows and columns of matrice - ");
 scanf("%d%d",&m,&n);
 printf("Enter the elemnts of A - \n");
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   {
    scanf("%d",&a[i][j]);
   }
  printf("\nMatrix is - \n");     
  for(i=0;i<m;i++)
	 {
	  for(j=0;j<n;j++)
		printf("%d ",a[i][j]);    
	  printf("\n");
	 }
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   {
    if(a[i][j]!=0 && i>=j)
    {
     s=0;
     break;
    }
   }
  if(s==1)
    printf("\nIt is strictly upper triangular matrix\n");
  else
    printf("\nIt is not strictly upper triangular matrix\n");
 }
