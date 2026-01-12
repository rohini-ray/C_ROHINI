#include<stdio.h>
#include<conio.h>
main()
{
    int i,j;
    char str[20];
    printf("Enter the name:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }
    getch();
}