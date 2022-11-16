#include<stdio.h>
int main()
{
    int x[50][50];
    int m,n,i,j;
    printf("Enter number of Rows: ");
    scanf("%d",&m);

    printf("Enter number of Columns: ");
    scanf("%d",&n);

    printf("Enter elements: \n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("Output:\n");
    int sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          sum=sum+x[i][j];
        }
         printf("Sum of Row %d:%d\n",i,sum);
         sum=0;

    }
    printf("\n");
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
          sum=sum+x[i][j];
        }
         printf("Sum of Col %d :%d\n",j,sum);
         sum=0;

    }

    return 0;
}
