#include<stdio.h>
#include<conio.h>
void main() 
{
  int i, n,k=1;
  float sum=0.0;
  clrscr();
  printf("Enter the number of terms: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sum=sum+1.0/k;
    k=k+i;
  }
  printf("Sum =%f", sum);
  getch(); 
}