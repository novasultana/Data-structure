#include<stdio.h>
int main()
{

    int graph[20][20];
    int n,i,j;
    printf("Enter how many vertex: ");
    scanf("%d",&n);
     printf("Enter graph: \n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             scanf("%d",&graph[i][j]);
         }
     }
     printf("graph: \n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             printf("%d ",graph[i][j]);

         }
          printf("\n");
     }
         for(i=0;i<n;i++)
         {
             printf("%d is connected with:",(i+1));

             for(j=0;j<n;j++)
             {
                 if(graph[i][j]==1)
                 {
                     printf("\t%d",(j+1));
                 }

             }
               printf("\n");
         }

         int degree;
         for(i=0;i<n;i++)
         {
             degree=0;
             for(j=0;j<n;j++)
             {
                 if(graph[i][j]=1)
                 {
                     degree++;
                 }

             }

         }
         printf("\n");
         printf("In degree of %d is %d",(i+1),degree);
         printf("\nOut degree of %d is %d",(i+1),degree);


}
