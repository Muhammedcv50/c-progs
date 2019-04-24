#include<stdio.h>
#include<math.h>
void main()
{
   float a,b,c,r1,r2,d,real,ima;
   printf("\nEnter a: ");
   scanf("%f",&a);
   printf("\nEnter b: ");
   scanf("%f",&b);
   printf("\nEnter c: ");
   scanf("%f",&c);
   if(a==0)
   {
      printf("\nNot Quadratic");
   }
   else
      {
         d=(b*b)-(4*a*c);
         if(d>0)
         {
            r1=(-b+(sqrt(d))/(2*a));
            r2=(-b-(sqrt(d))/(2*a));
            printf("%f,%f\n",r1,r2);
         }
         else if(d==0)
         {
            r1=r2=(-b)/(2*a);
            printf("\nEqual roots: %f,%f\n",r1,r2);
         }
         else
         {
            real=-b/(2*a);
            ima=sqrt(abs(d))/(2*a);
            printf("\nImaginary Root 1: %f + i%f",real,ima);
            printf("\nImaginary Root 2: %f - i%f\n",real,ima);
         }
      }
}


