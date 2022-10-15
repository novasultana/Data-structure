#include<stdio.h>
int main()
{
    int arr[100];
    int n,i,j,temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter data\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {

            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int sec_largest=arr[n-2];
    int sec_smallest=arr[1];

    printf("Second Maximum: %d\n",sec_largest);
    printf("Second Minimum: %d",sec_smallest);

    return 0;
}
