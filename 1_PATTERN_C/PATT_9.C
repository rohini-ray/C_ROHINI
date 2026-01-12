#include<stdio.h>
#include<conio.h> 
void main()
{
 int i,j,k=1,d=1;
 char n=66;
 for(i=1;i<=5;i++)
 {
  if(i%2!=0)
  {
   for(j=1;j<=i;j++)
   {
    printf("%d",k);    
   }
   d=d+2;
   k=k+d;
  }
  else
  {
   for(j=1;j<=i;j++)
   {
    printf("%c",n);
    n=n+1;    
   }
   n=n+1;
  }
  printf("\n");
 }
 getch(); 
}