#include<stdio.h>
int main()
{
    int a[50],i,n;
    
    printf("Enter size of array:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
 int max=a[0];
 
for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    
    printf("Maxumum number is:%d",max);
    
    return 0;
}
