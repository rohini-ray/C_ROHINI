#include<stdio.h>
#include<conio.h>

struct student //struct, always define outside main
{
 char name[30];
 int age; 
 char gender; 
 float marks;  
}; 
 
void main()
{
 struct student s[10]; 
 int i,j,k;//k=>max_index 
 for(i=0;i<=2;i++)
 {
  printf("Enter name of the student:\n");
  fflush(stdin);
  scanf("%s",s[i].name); //String scanf korle, don't use &
  printf("Enter age of the student:\n");
  scanf("%d",&s[i].age);
  printf("Enter gender of the student [M/F]:\n");
  scanf("%c",&s[i].gender);
  printf("Enter marks of the student:\n");
  scanf("%f",&s[i].marks);
  printf("\n");
 }
 
 for(j=0;j<=2;j++)
 {
  if(s[j].marks>s[j+1].marks)
  {
   k=j;
  }
 }
 printf("Student Name = %s \nAge=%d \nGender=%c \nMarks=%.2f",s[k].name,s[k].age,s[k].gender,s[k].marks);
 getch();
}