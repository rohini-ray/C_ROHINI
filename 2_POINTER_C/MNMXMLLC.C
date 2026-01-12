#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int *p,*q, max, min, size;
    clrscr();
    printf("Enter how many data: ");
    scanf("%d", &size);
    p=(int *)malloc(size*sizeof(int));
    printf("\nEnter %d data: ", size);
    for(q=p+size-1; q>=p; q--)//Array Reverse Traversal
    {
        scanf("%d", q);
    }
    min=max=*p;
    for(q=p+1; q<=p+size-1; q++)
    {
        if(max<*q)
            max=*q;
        if(min>*q)
            min=*q;
    }
    printf("Min=%d",min);
    printf("\nMax=%d",max);
    getch();
}