#include<stdio.h>
#include<conio.h>

struct date //Structure => always define outside main()
{
 int day;
 int month;
 int year;
}; 

struct employee 
{
 char emp_name[30];
 int emp_id;
 struct date d;
}; 

void main()
{
 int i,j,k=0; //k is the max_index
 struct employee e[10];
 for(i=0;i<=2;i++)
 {
  printf("Enter name of the employee:\n");
  fflush(stdin); 
  scanf("%s",e[i].emp_name); //String scanf korle, dont use &
  printf("Enter id of the employee:\n");
  scanf("%d",&e[i].emp_id);
  
  printf("Enter date of joining:\n");
  scanf("%d %d %d",&e[i].d.day, &e[i].d.month, &e[i].d.year);
  printf("\n");
 }
 
 for(j=0;j<=2;j++)
 {
  if(e[j].d.year<e[k].d.year) //Compare years
  {
   k=j;
  }
  else if(e[j].d.year==e[k].d.year) //If years equal, compare months
  {
   if(e[j].d.month<e[k].d.month)
   {
    k=j;
   }
   else if(e[j].d.month==e[k].d.month) //If months equal, compare days
   {
    if(e[j].d.day<e[k].d.day) //If days equal, then keu karur senior noy
    {
     k=j;
    }
   }
  }
 }
 printf("Emp Name = %s \nEmp ID=%d \nJoining Date=%d.%d.%d",e[k].emp_name, e[k].emp_id, e[k].d.day,  e[k].d.month, e[k].d.year);
 getch();
}