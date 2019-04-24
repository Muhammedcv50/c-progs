#include<stdio.h>
void main()
{
 int op=0;
while(op<4)
{
 int i,j,k,m,n,p,q;
 int a[10][10],b[10][10],c[10][10];
 printf("\n1.Sum of Matrix\n2.Multiplication of Matrix\n3.Transpose of Matrix\n4.Exit\nChoose any option - ");
 scanf("%d",&op);
 switch(op)
 {
  case 1:
          printf("Enter the no of rows and columns of mat A - ");
          scanf("%d%d",&m,&n);
          printf("Enter the no of rows and columns of mat B - ");
          scanf("%d%d",&p,&q);
          if(n!=q||m!=p)
           printf("\nMatrix cant be added !!!");
          else
          {printf("Enter the elemnts of A - \n");
		   for(i=0;i<m;i++)
            for(j=0;j<n;j++)
             scanf("%d",&a[i][j]);
   
           printf("Enter the elemnts of B - \n");
		   for(i=0;i<p;i++)
			  for(j=0;j<q;j++)
				scanf("%d",&b[i][j]);

		   for(i=0;i<m;i++)
			  for(j=0;j<q;j++)
				 c[i][j]=0;
			 
			for(i=0;i<m;i++)
			  for(j=0;j<q;j++)
				  c[i][j]=a[i][j]+b[i][j];
            printf("Resultant C is - \n");     
            for(i=0;i<m;i++)
            {
            for(j=0;j<q;j++)
             printf("%d ",c[i][j]);    
            printf("\n");
            }
           }
           break;
    
    case 3 : 
            printf("Enter the no of rows and columns of mat A - ");
			scanf("%d%d",&m,&n);
			printf("Enter the elemnts of A - \n");
			for(i=0;i<m;i++)
			  for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
			 for(i=0;i<n;i++)
			  for(j=0;j<m;j++)
				  c[i][j]=a[j][i];
			printf("\nMatrix is - \n");     
			for(i=0;i<m;i++)
			 {
			 for(j=0;j<n;j++)
			   printf("%d ",a[i][j]);    
			 printf("\n");
			 }
			 
			printf("Transpose is - \n");     
			for(i=0;i<n;i++)
			 {
			 for(j=0;j<m;j++)
			   printf("%d ",c[i][j]);    
			 printf("\n");
			 }       
			break;
			
	case 2: 
	         printf("Enter the no of rows and columns of mat A - ");
             scanf("%d%d",&m,&n);
             printf("Enter the no of rows and columns of mat B - ");
             scanf("%d%d",&p,&q);
	         if(n!=p)
			 printf("\nMatrix cant be mulltiplied !!!");
			else
			{
			printf("Enter the elemnts of A - \n");
			for(i=0;i<m;i++)
			  for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
			   
			printf("Enter the elemnts of B - \n");
			for(i=0;i<p;i++)
			  for(j=0;j<q;j++)
				scanf("%d",&b[i][j]);

			 for(i=0;i<m;i++)
			   for(j=0;j<q;j++)
				 c[i][j]=0;
			 
			for(i=0;i<m;i++)
			  for(j=0;j<q;j++)
				for(k=0;k<n;k++)
				  c[i][j]+=a[i][k]*b[k][j];
			printf("\nResultant C is - \n");     
			for(i=0;i<m;i++)
			 {
			 for(j=0;j<q;j++)
			   printf("%d ",c[i][j]);    
			 printf("\n");
			 }
			}	
  }
 }
}		



























