#include<stdio.h>
int main()
{
    int n,i,arr[100],element;

    printf("Enter size of Array: \n");
    scanf("%d",&n);
    printf("Enter elements:");

    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to search:");
    scanf("%d",&element);

    for(i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            printf("Found!!!\n location is: %d",i+1);
            break;
        }

    }

    return 0;

}

