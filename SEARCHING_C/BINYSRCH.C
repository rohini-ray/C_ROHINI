#include<stdio.h>
#include<conio.h>
int bSearch(int[],int,int,int);
void main()
{
 int arr[30],low,mid,high,n,m,i,res;
 clrscr();
 printf("\nEnter no. of elements : ");
 scanf("%d",&n);
 printf("\nEnter %d elememts : ",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("\nEnter element you want to search : ");
 scanf("%d",&m);
 low=0;
 high=n-1;
 res=bSearch(arr,m,low,high);
 if(res==-1)
 {
  printf("\nElement not found ");
 }
 else
 {
  printf("\nElement found in %d position",res);
 }
 getch();
}

int bSearch(int arr[],int m,int low,int high)
{
 int mid;
 while(high>=low)
 {
  mid=(low+high)/2;
  if(m==arr[mid])
  {
   return mid;
  }
  else
  {
   if(m>arr[mid])
   {
    low=mid+1;
   }
   else
   {
    high=mid-1;
   } 
  }
 }
 return -1;
}