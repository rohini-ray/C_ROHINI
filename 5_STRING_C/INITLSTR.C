#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[30];
 int i;
 clrscr();
 printf("Enter a string: ");
 gets(str);
 
 if(str[0]>=97 && str[0]<=122)
 {
  str[0]=str[0]-32;
 }
 printf("%c ",str[0]);
 
 for(i=1;str[i];i++)
 {
  if(str[i]==32) //space encounter
  {
    if(str[i]=='\0')
    {
     break;
    }
    if(str[i+1]>=97 && str[i+1]<=122) //If lowercase 
    {
     str[i+1]=str[i+1]-32; //Convert to UPPERCASE 
    }
    printf("%c ",str[i+1]);
  }
 }
 getch();
}