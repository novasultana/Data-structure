#include <iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    float data1;
    struct node *link;
};

struct node *head,*node,*temp,*cgpa;

int main()
{
    int i,n,j;
    printf("Enter how many data");

    scanf("%d",&n);

    head=NULL;

    for(i=0; i<=n; i++)
    {

        node=(struct node *)malloc(sizeof(struct node*));

        if(node==NULL)
        {
            printf("Can not Allocate");
        }

        else
        {
            int item;
            float cgpa;
            printf("\nEnter your data :");
            scanf("%d",&item);

            printf("\nEnter your cgpa ");
            scanf("%f",&cgpa);
            node->data=item;
            node->data1=cgpa;

            node->link=NULL;

            if(head==NULL)
            {
                head=node;
                printf("\nInserted at head\n");
            }

            else
            {
                temp=head;
                while(temp->link!=NULL)
                {
                    temp=temp->link;
                }
                temp->link=node;
            }


        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d---%f--->",temp->data,temp->data1);
        temp=temp->link;
    }
    printf("NULL");

}

