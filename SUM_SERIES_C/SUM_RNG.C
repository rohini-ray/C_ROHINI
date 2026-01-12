#include<stdio.h>
#include<conio.h>
int sum_range(int,int);
void main()
{
 int x,y,sum;
 clrscr();
 printf("Enter Starting num of the Range: ");
 scanf("%d",&x);
 printf("Enter Ending num of the Range: ");
 scanf("%d",&y);
 sum=sum_range(x,y);
 printf("The Sum from %d to %d = %d",x,y,sum);
 getch();
}

int sum_range(int x, int y)
{
 if(x==y)
  return y;
 return (y+sum_range(x,y-1));
}