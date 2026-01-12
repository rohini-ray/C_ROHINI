#include <stdio.h>
#include <conio.h>
void main() 
{
    int a[10],p,n,i,j,min,t; 
    clrscr();
    
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("\nEnter elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d ",&a[i]);
    } 

    // Insertion Sort
    for(p=0; p<n-1; p++)
    {
     min=p+1;
     for(j=min+1;j<=n-1;j++)
     {
      if(a[min]>a[j])
      {
       min=j;
      }
      if(a[p]>a[min])
      {
       t=a[p];
       a[p]=a[min];
       a[min]=t;
      }
     }   
    }

    // Print sorted array
    printf("\nSorted array:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
}