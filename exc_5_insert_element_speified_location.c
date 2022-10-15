#include <stdio.h>
int main()
{
    int arr[100];
    int k, i, n,value;
    printf("Enter size: ");
    scanf("%d",&n);

    printf("Input array elements: ", n);

    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Input element to Insert: ");
    scanf("%d", &value);

    printf("Input position where to insert:");
    scanf("%d",&k);


    for (i=n-1; i>=k-1; i--)
    {
        arr[i+1]=arr[i];
    }

    arr[k-1]=value;

    printf("Elements of Array are: ");

    for (i=0; i<=n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
