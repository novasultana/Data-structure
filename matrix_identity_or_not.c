#include <stdio.h>
int main()
{
    int a[50][50];
    int i, j, Identity,m,n;
    
   printf("Enter number of Rows: ");
    scanf("%d",&m);

    printf("Enter number of Columns: ");
    scanf("%d",&n);
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    Identity = 1;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {

            if(i==j && a[i][j]!=1)
            {
                Identity = 0;
            }
            else if(i!=j && a[i][j]!=0)
            {
                Identity = 0;
            }
        }
    }

    if(Identity == 1)
    {
        printf("\nIt is an IDENTITY MATRIX\n");
    }
    else
    {
        printf("It is not an IDENTITY MATRIX");
    }

    return 0;
}
