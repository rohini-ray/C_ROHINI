#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void reverse_copy(int A[], int B[], int size);

void main() 
{
    int i,j;
    int A[20], B[20];
    printf("Enter 10 elements of Array A:\n(Use Enter <-/ as delimeter)\n");
    for (i = 0; i <= 9; i++) 
    {
        scanf("%d", &A[i]);
    }
    printf("Array A: ");
    for (i = 0; i <= 9; i++) 
    {
        printf("%d ", A[i]);
    }
    reverse_copy(A, B, 10);
    printf("\nArray B: ");
    for (j = 0; j <= 9; j++) 
    {
        printf("%d ", B[j]);
    }
    getch();
}

void reverse_copy(int A[], int B[], int size) 
{
    for (int i = 0; i <= size-1; i++) 
    {
        B[size-1-i] = A[i];
    }
}