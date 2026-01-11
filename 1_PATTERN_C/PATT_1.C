#include<stdio.h>
#include<conio.h> 
void main()
{
 int i,j,k;
 clrscr();
 for(i=1,k=0;i<=5;i++) 
 {
  if(i%2!=0)
  {
   k=k+i;
   for(j=1;j<=i;j++)
   {
    printf("%d ",k--);
   }
   k++;
  }
  else
  {
   k=k+i-1;
   for(j=1;j<=i;j++)
   {
    printf("%d ",k++); 
   }
   k--;
  }
  printf("\n");
 }
 getch();
}