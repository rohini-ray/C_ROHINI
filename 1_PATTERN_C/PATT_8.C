#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k=1;
 clrscr();
 for(i=1;i<5;i++)
 {
  for(j=1;j<=5;j++)
  {
   if(k>4)
   {
    k=1;
   }
   printf("%d ",k);
   k++;
  }
  printf("\n");
 }
 getch();
}