#include<stdio.h>
#include<conio.h>
void main()
{ 
 int i,j,k;
 char s1[30],s2[30];
 clrscr();
 printf("Enter String: ");
 gets(s1);
 for(i=0;s1[i];i++)
 {
  if(s1[i]>=65 && s1[i]<=90)
  {
   s1[i]=s1[i]+32;
  }
 }
 s2[0]=s1[0]-32;
 s2[1]=' ';
 for(i=1,j=2;s1[i];i++)
 {
  if(s1[i]==' ')
  {
   k=i;
   s2[j]=s1[i+1]-32;
   j++;
   s2[j]=' ';
   j++;
  }
 }
 for(i=k+2,j=j-1;s1[i];i++,j++)
 {
   s2[j]=s1[i];
 }
 s1[j]='\0';
 printf("The new string = %s",s2);
 getch(); 
}