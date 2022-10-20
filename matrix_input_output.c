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

    printf("Output Array:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
}
