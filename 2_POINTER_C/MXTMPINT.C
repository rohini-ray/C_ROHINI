#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main() 
{
  int **p,i,j; //Input: 2 Days, 2 Cities
  clrscr();
  
  p=(int **)malloc(2 * sizeof(int *));
  for(i=0;i<2;i++) 
  {
   p[i]=(int *)malloc(2 * sizeof(int));
  }

  printf("Enter the max temp for 2 cities in 2 days:\n");
  for(i=0;i<2;i++) 
  {
    for(j=0;j<2;j++) 
    {
      printf("Max Temp [Day %d][ City %d]: ",i+1,j+1);
      scanf("%d", &p[i][j]);
    }
  }

  printf("\nMax Temp(°c):\n");
  printf("Day\\City ");
  for(j=0; j<2; j++) 
  {
    printf("C%d    ", j+1);
  }
  printf("\n");
  
  for (i=0;i<2;i++) 
  {
   printf("Day%d ", i+1);
   for(j=0;j<2;j++) 
   { 
     printf("    %d", p[i][j]);
   }
   printf("\n");
  }
  getch();
}






/*#include <stdio.h>

int main() {
    float temp[31][10]; // 31 days, 10 cities
    int day, city;

    // Input temperatures
    printf("Enter the maximum temperatures for 10 cities for 31 days:\n");
    for(day = 0; day < 31; day++) {
        printf("Day %d:\n", day + 1);
        for(city = 0; city < 10; city++) {
            printf("  City %d: ", city + 1);
            scanf("%f", &temp[day][city]);
        }
    }

    // Display the temperatures
    printf("\nRecorded Maximum Temperatures (in °C):\n");
    printf("Day\\City ");
    for(city = 0; city < 10; city++) {
        printf("C%-4d ", city + 1);
    }
    printf("\n");

    for(day = 0; day < 31; day++) 
    {
        printf("Day %-4d", day + 1);
        for(city = 0; city < 10; city++) 
        {
            printf("%-6.1f", temp[day][city]);
        }
        printf("\n");
    }

    return 0;
}
*/