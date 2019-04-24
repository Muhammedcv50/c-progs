#include<stdio.h>

void main()
{
 FILE *f1,*f2,*f3;
 int ch,n,i;
 f3=fopen("Even.txt","w");
 f2=fopen("Odd.txt","w");
 f1=fopen("No.txt","w");
 printf("Enter the limit -");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&ch);
  putw(ch,f1);
 }
 
 fclose(f1);
 
 f1=fopen("No.txt","r");
 
 while((ch=getw(f1))!=EOF)
 {
  if((ch%2)!=0)
    putw(ch,f2);
  else
    putw(ch,f3);
 }
 
 
 fclose(f1);
 fclose(f2);
 fclose(f3);  
 
 

 
}
