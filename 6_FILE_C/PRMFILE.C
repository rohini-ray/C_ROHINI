#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *f1,*f2;
 int n,i,flag=0;
 clrscr();
 printf("Enter data to source file: ");
 f1=fopen("FILE1.txt","w");
 for(i=1;i<=5;i++)
 {
  scanf("%d",&n);
  if(n==-1)
     break;
  putw(n,f1);   
 }
 fclose(f1);
 f1=fopen("FILE1.txt","r");
 f2=fopen("PRIME.txt","w");
 while((n=getw(f1))!=EOF)
 {
  if(n==0||n==1)
     flag=1;
  for(i=2;i<n/2;i++)   
  {
   if(n%i==0)
   {
    flag=1;
    break;
   }
   else
   {
    putw(n,f2);
   }
  }
 }
 fclose(f1);
 fclose(f2);
 f2=fopen("PRIME.txt","r");
 printf("The prime nos. are:\n");
 while((n=getw(f2))!=EOF)
 {
  printf("%d",n);
 }
 fclose(f2);
 getch();
}