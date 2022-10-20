#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],sum[50][50],i,j,n;

    printf("Input the size of the square matrix: ");
    scanf("%d", &n);

    printf("Input elements in the first matrix :\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Input elements in the second matrix :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {

            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("Sum of two matrix is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
