#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,a[20],x,y,s,r,count=0;
 printf("Enter Array:\n");
 for(i=0;i<=9;i++)
 {
  scanf("%d",&a[i]);
 }
 
 for(i=0;i<=9;i++)
 {
  s=0;
  x=a[i];
  while(x!=0) //Reverse korchhi arr el ke
  {
   r=x%10;
   s=s*10+r;
   x=x/10;
   y=s;   
  }
  
  for(j=i+1;j<=9;j++) //next index theke check korchhi, which matches the rev el 
  {
   if(a[j]==y)
   {
    count++;
    a[j]=0; //ekbar rev el pele, porer rev el dhokanor jonno toh a[j] khali korbo
   }
  }
 }
 
 printf("Count = %d",count);
 getch(); 
}