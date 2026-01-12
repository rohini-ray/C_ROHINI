#include<stdio.h>
#include<conio.h> 
void main()
{
 int i,j,k;
 for(i=1;i<=5;i++)
 {
   k=i;
   for(j=5;j>=i;j--)
   {
    printf("%d ",k);
    k=k+2;
   }
   printf("\n");
  } 
 getch(); 
}