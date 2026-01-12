#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
 int x,y,i,k;
 clrscr(); 
 printf("Enter Upper Limit: ");
 scanf("%d",&x);
 printf("Enter Lower Limit: ");
 scanf("%d",&y);
 printf("The numbers of fib series from %d to %d: ",x,y);
 for(i=0;i<=y;i++)
 {
  k=fib(i);
  
  if(k>=x && k<=y)
     printf("%d ",k);
 }
 getch();
}
int fib(int n)
{
 if(n==0)
   return 0;
 if(n==1)
    return 1;
 return (fib(n-1)+fib(n-2));       
}