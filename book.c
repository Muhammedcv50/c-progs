/*A program to create a structure book and pass the structure as function argument and print the book details*/

#include<stdio.h>
#include <string.h>
struct book
{
	int b_id;
	char title[50];
	char a_name[50];
	char place[30];
};
void print(struct book b1)
{
	printf("\nBook id : %d\n",b1.b_id);
	printf("Title : %s\n",b1.title);
	printf("Author : %s\n",b1.a_name);
	
}
void main()
{
	struct book b1;
	char str[20];
	printf("Enter the book id : ");
	scanf("%d",&b1.b_id);
	gets(str);
	printf("Enter the author : ");
	gets(b1.a_name);
	printf("Enter the title : ");
	gets(b1.title);
	print(b1);
}
	
