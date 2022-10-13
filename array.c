#include<stdio.h>
int main()
{
    int n,i,arr[100];

    printf("Enter size of Array: ");
    scanf("%d",&n);

    printf("Enter elements:");

    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }

    printf("Output array: \n");
     for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }

    return 0;

}
