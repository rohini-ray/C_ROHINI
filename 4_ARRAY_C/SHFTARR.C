#include<stdio.h>
#include<conio.h> 
void main()
{
 int i,n,pos,t,r;
 int a[]={55,45,39,18,27,33,25,86,92,48};
 printf("Enter no.: ");
 scanf("%d",&n);
 printf("Enter position: ");
 scanf("%d",&pos);
 t=a[pos];
 a[pos]=n;
 
 for(i=pos+1;i<=9;i++)
 {
    r=a[i];
    a[i]=t;
    t=r;
 }
 printf("\nArray\n");
 for(i=0;i<=9;i++)
 {
  printf("%d  ",a[i]);  
 }   
 getch();
}