#include<stdio.h>
// Selection Sort

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10];
    printf("\n Enter 10 numbers for array : ");

    int i=0;
    for(i=0;i<10;i++)   scanf(" %d", &a[i]);
    //printf("\nAfter scanf loop.");
    printf("\n");
    for(i=0;i<10;i++)   printf(" %d ", a[i]);

    printf("\n");
    int j=0;
    int index;
    int min=a[0];
    for(i=0;i<10;i++)
    {
        min = a[i];
        for(j=i;j<10;j++)
        {
            if(min>=a[j])
            {
                min = a[j];
                index = j;
            }
        }
        a[index] = a[i];
        a[i]=min;
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf(" %d ", a[i]);
    }
    return 0;
}
