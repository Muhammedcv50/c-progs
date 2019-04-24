#include<stdio.h>
void main()
{
 int t,s,m,h;
 printf("Enter total time in sec - ");
 scanf("%d",&t);
 h=t/3600;
 m=(t%3600)/60;
 s=(t%60);
 printf("\nTime is %d hours %d minutes %d seconds\n\n",h,m,s); 
}
