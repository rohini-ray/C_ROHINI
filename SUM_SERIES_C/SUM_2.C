#include<stdio.h>
#include<conio.h>
#include<math.h>
float sum_x(int, float);
void main() 
{
  int n;
  float x; 
  clrscr();
  printf("Enter number of terms: ");
  scanf("%d", &n);
  printf("Enter value of x: ");
  scanf("%f", &x);
  printf("Sum=%f\n",sum_x(n,x));
  getch();
} 
float sum_x(int n, float x)
{
 int i;
 float sum=0.0;
 for(i=1;i<=n;i++)
 {
   sum=sum-pow(-1,i)*pow(x,i)/i;
 }
 return sum;
}