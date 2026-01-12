#include <stdio.h>
#include <conio.h>
void toh(int,char,char,char);
void main()
{
    int n;
    clrscr();
    printf("Enter no. of disc:");
    scanf("%d", &n);
    toh(n, 'A', 'C', 'B');
    getch();
}

void toh(int n, char beg, char aux, char end)
{
    if(n == 1)
    {
        printf("\n %c to %c ", beg, end);
        return;
    }
    toh(n-1, beg, end, aux);
    printf("\n %c to %c ", beg, end);
    toh(n-1, aux, beg, end);
}