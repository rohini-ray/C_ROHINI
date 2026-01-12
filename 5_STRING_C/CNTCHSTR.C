#include<stdio.h>
#include<conio.h>
main()
{
 char str[30];
 int i,k,space=0,alpha[26]={0};
 printf("Enter your name: ");
 gets(str);
 for(i=0;str[i];i++)
 {
  if(str[i]>=97&&str[i]<=122)
     str[i]-=32;
 }
 for(i=0;str[i];i++)
 {
  if(str[i]==' ')
     space++;
  else
  {
   k=str[i]-65; 
   alpha[k]++;
  }
 } 
 for(i=0;i<26;i++)
 {
  if(alpha[i]>0)
  {
   printf("\n%c=%d",i+65,alpha[i]);
  }
 }
 printf("\nSpace=%d",space);
 getch();
}