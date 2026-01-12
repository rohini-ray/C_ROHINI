#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main() 
{
  int **p,row,col,i,j;
  clrscr();
  printf("Enter number of rows: ");
  scanf("%d", &row);
  printf("Enter number of columns: ");
  scanf("%d", &col);
  p=(int **)malloc(row * sizeof(int *));
  for(i=0;i<row;i++) 
  {
   p[i]=(int *)malloc(col * sizeof(int));
  }

  printf("Enter elements of the 2D array:\n");
  for(i=0;i<row;i++) 
  {
    for(j=0;j<col;j++) 
    {
      printf("Element [%d][%d]: ",i,j);
      scanf("%d", &p[i][j]);
    }
  }

  printf("\nThe 2D array ----\n");
  for (i=0;i<row;i++) 
  {
   for(j=0;j<col;j++) 
   { 
     printf("%d ", p[i][j]);
   }
   printf("\n");
  }
  getch();
  return 0;
}