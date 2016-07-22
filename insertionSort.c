#include<stdio.h>
// Insertion Sort
int main()
{
    int a[10];
    printf("\n Enter 10 numbers for array :");
    int i=0;

    for(i=0;i<10;++i)
    scanf("%d", a+i);

    int j=0,temp,k=0;

    for(i=0;i<10;++i)
    {
           temp = a[i];
           for(k=i-1;k>0;k--) {
            if(a[k]<temp)break;
           }
           j=i-1;
            while(j>=k)
            {
                a[j+1]=a[j];
                j--;
            }
            a[k]=temp;
for(k=0;k<10;k++)

    printf("%d ", a[i]);
    printf("\n");
    }

    for(i=0;i<10;++i)
    printf("%d ", a[i]);
    return 0;
}
