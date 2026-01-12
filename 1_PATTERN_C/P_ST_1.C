#include<stdio.h>
#include<conio.h> 
void main()
{
 int i,j;
 char str[]="TRISHA";

 for(i=0;str[i];i++)
 {
  for(j=0;j<=i;j++)
  {
    printf("%c",str[j]);
  }  
  printf("\n");
 }
 getch(); 
}