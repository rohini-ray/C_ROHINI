#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main() 
{
  float max_temp[31][10];
  int day,city,i,j; 
  clrscr();  
  printf("Enter number of days: ");
  scanf("%d", &day);
  printf("Enter number of cities: ");
  scanf("%d", &city);
  
  printf("Enter the max temp for a city in a day:\n");
  for(i=0;i<day;i++) 
  {
    for(j=0;j<city;j++) 
    {
      printf("Max Temp [Day %d][ City %d]: ",i+1,j+1);
      scanf("%f", &max_temp[i][j]);
    }
  }

  printf("\nMax Temp(°C):\n");
  printf("Day\\City ");
  for(j=0; j<city; j++) 
  {
    printf("C%d       ", j+1);
  }
  printf("\n");
  
  for (i=0;i<day;i++) 
  {
   printf("Day%d ", i+1);
   for(j=0;j<city;j++) 
   { 
     printf("    %.2f", max_temp[i][j]);
   }
   printf("\n");
  }
  getch();
}