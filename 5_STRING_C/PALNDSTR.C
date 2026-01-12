# include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str[50];
printf("Enter String: ");
gets(str);
int l=0;
int h=(strlen(str)-1);
clrscr();
while(h>l)
{
 if(str[l++]!=str[h--])
 {
   printf("Not Palindrome");
   return 0;
 }
}
printf("Palindrome");   
getch();
return 0;
}