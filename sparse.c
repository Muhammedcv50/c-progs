#include<stdio.h>
void main()
{
 int s=0;
 int i,j,m,n;
 int a[10][10];
 printf("Enter the no of rows and columns of matrice - ");
 scanf("%d%d",&m,&n);
 printf("Enter the elemnts of A - \n");
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   {
    scanf("%d",&a[i][j]);
    if(a[i][j]==0)
       ++s;
    }
  if(s>(m*n/2))
    printf("\nIt is sparse matrix\n");
  else
    printf("\nIt is not a sparse matrix\n");
  }
