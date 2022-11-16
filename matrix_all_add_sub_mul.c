#include<stdio.h>
int main()
{
    printf("Enter your choice: \n 1 for addition \n 2 for subtraction \n 3 for multiplication");

int n;
scanf("%d",&n);
if(n==1)
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

}
if(n==2)
{
    int a[50][50],b[50][50],sub[50][50],i,j,n;

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

            sub[i][j]=a[i][j]-b[i][j];
        }
    }

    printf("Subtraction of two matrix is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
}
if(n==3)
{
    int a[50][50],b[50][50],mul[50][50],i,j,n;

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
            int sum=0;
             for(int k=0; k<n; k++)
           {
                sum += a[i][k] * b[k][j];
            }

            mul[i][j] = sum;
        }
    }
    printf("You choose 3\n\n ");
    printf("multiplication : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}
}

