#include<stdio.h>
#include<conio.h>
void main ()
{
 int a=1,b=0,c,f,i,e;
 printf("Enter the lower range: ");
 scanf("%d",&c);
 printf("Enter the upper range: ");
 scanf("%d",&f);
 for(i=c;i<=f+1;i++)
 {
 if(b>=c&&b<=f)
 {
  printf("%d ",b);
 }
 e=a+b;
 a=b;
 b=e;
 }
 getch();
}