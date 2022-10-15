#include<stdio.h>
int main()
{
    int arr[]= {1,2,3,4,2,7,8,8,3};
    int length=sizeof(arr)/sizeof(arr[0]);
    int i,j;

    for(i=0; i<length; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n\nDuplicate elements in given array:\n\n");

    for(i=0; i<length; i++)
    {

        for(j=i+1; j<length; j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d ",arr[j]);
            }
        }
    }
    return 0;
}
