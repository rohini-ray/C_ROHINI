#include<stdio.h>
#include<conio.h> 
void main()
{
 int i;
 char str[]="TRISHA";
 for(i=0;str[i];i++)
 {
  str[i]=str[0];
  printf("%s",str);
  printf("\n");
 }
 getch(); 
}