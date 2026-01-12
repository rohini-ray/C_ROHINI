#include<stdio.h>
#include<conio.h>
int ispresent(int, int [], int);
void main()
{
    int a[30],even[30],odd[30],i,j,e=0,o=0,count,n;
    clrscr();
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    printf("Enter Array Elements:");
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<=n-1; i++)
    {
        //printf ("first run");
        if(ispresent(a[i],even,e)==1&& ispresent(a[i],odd,o)==1)
        {
            count=1;
            for(j=i+1; j<=n-1; j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
            }
            if(count%2==0)
            {
                even[e++]=a[i]; //for loop lagbe na_overwrite since n porjonto loop cholchhe, everytime loop iterates
            }
            else
            {
                odd[o++]=a[i];
            }
        }
    }
    printf("\nEven_Occur_Arr:\n");
    for(i=0; i<=e-1; i++)
    {
        printf("%d ",even[i]);
    }

    printf("\nOdd_Occur_Arr:\n");
    for(i=0; i<=o-1; i++)
    {
        printf("%d ",odd[i]);
    }

    getch();
}

int ispresent(int item, int arr[], int size)
{
   //printf ("run");
    int i;
    for(i=0; i<=size-1; i++)
    {
        if(item==arr[i]) //item present->skip->false
        {
            return 0;
        }
    }
    return 1;
}