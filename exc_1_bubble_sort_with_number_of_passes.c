#include<stdio.h>
int main()
{
    int arr[100];
    int n,i,j,temp;
    printf("Enter number of elements:");
    scanf("%d", &n);

    printf("Enter data\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    int count=0;
    int comp=0;

    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            comp++;
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
                count++;
            }

        }

    }

    printf("Sorted array:\n");
    for (i=0; i<n; i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
    printf("Total number of swap: %d\n",count);
    printf("Total number of Pass:%d",comp);

    return 0;
}
