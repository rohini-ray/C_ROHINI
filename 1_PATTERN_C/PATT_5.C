#include<stdio.h>
#include<conio.h>
void main()
{
 int i, j, k;
 clrscr();
 for(i=1;i<=3;i++)
 {
  for(j=i;j>=1;j--)
  {
   printf("%d ",j);   
  }
  printf("\n");
 }
 getch();
}