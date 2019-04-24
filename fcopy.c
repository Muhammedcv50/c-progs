#include<stdio.h>

void main()
{
 FILE *f1,*f2;
 char ch;
 f2=fopen("text2","w");
 f1=fopen("text1","w");
 while((ch=getchar())!=EOF)
 {
  putc(ch,f1);
 }
 fclose(f1);
 f1=fopen("text1","r");
 while((ch=getc(f1))!=EOF)
 {
  putc(ch,f2);
 }
 
 fclose(f1);
 fclose(f2); 
}
