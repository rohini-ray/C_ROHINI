#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,s[100],t;
 printf("Enter first element: ");
 scanf("%d",&t);
 i=1;
 s[0]=t;
 while(scanf("%d",&t,printf("\nEnter next element(press characterto exit): ")))
 {
  j=i-1;
  while(s[j]>t && j>=0)
  {
   s[j+1]=s[j];
   j--;
  } 
  s[j+1]=t; 
  i++;
 }
 printf("\nThe Sorted Array: "); 
 for(j=0;j<i;j++)
 {
  printf("%d ",s[j]);
 }
 getch(); 
}