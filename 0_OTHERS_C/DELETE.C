#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];
clrscr();
printf("Enter file name:");
gets(s);
 if(remove(s)==0)
   printf("\n File has been deleted");
 else
   printf("\n Invalid path");
getch();
}