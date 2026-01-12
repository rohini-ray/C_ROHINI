#include<stdio.h>
#include<conio.h>
int sum_prime(int [], int);
void main() 
{
  int a[10],i;
  clrscr();
  printf("Enter 5 elements:\n");  
  for(i=0;i<=4;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Array A: \n");
  for(i=0;i<=4;i++)  
  {
   printf("%d  ",a[i]);
  }
  printf("Sum of Prime Nums of Array: %d", sum_prime(a,5));
  getch();
}

int sum_prime(int b[], int size)
{
 int i, k, flag, sum=0; //Declaration 
 for(k=0;k<=size-1;k++)
 {
  flag=0; //Initialization
  if (b[k]==0||b[k]==1)
  {
    flag = 1;
  }  
  for(i=2;i*i<=b[k];i++)
  {
    if(b[k]%i==0)
    {
     flag=1;
     break;
    }
  }
  if(flag==0)
  {
   sum=sum+b[k];
  }
 }
 return sum;
}