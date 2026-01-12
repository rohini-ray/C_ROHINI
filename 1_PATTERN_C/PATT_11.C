#include<stdio.h>
#include<conio.h> 
void main()
{
 int i,j,k=1,l=7;
 for(i=1;i<=7;i++)
 {
  if(i%2!=0)
  {
   for(j=1;j<=i;j++)
   {
    printf("%d ",k);
    k++;
   }
   k--;
  } 
  else
  { 
   for(j=1;j<=i;j++)
   {
    printf("%d ",l);
    l--;
   }
   l++;
  } 
  printf("\n");
 }
 getch(); 
}