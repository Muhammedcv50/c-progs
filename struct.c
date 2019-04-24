#include<stdio.h>

typedef struct
{
 char day[3];
 char month[10];
 int year;
 float sal;
 char name[20];
}t;

void main()
{
 t emp1,emp2;
 printf("Enter the name - ");
 gets( emp1.name);
 printf("Enter the month - ");
 gets( emp1.month);
 printf("Enter the salary - ");
 scanf("%f",&emp1.sal);
 printf("Enter year - ");
 scanf("%f",&emp1.year);
 printf("\nName is %s",emp1.name);
 printf("\nmonth is %s",emp1.month);
 printf("\nDay is %s",emp1.day);
 printf("\nSalary is %f",emp1.sal);
 
}


