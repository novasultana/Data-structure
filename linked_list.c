#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};

struct node *head,*node,*temp;

int main()
{
    int i,n;
    printf("Enter how many data");

    scanf("%d",&n);

    head=NULL;

    for(i=0;i<=n;i++)
    {

        node=(struct node *)malloc(sizeof(struct node*));

        if(node==NULL)
        {
            printf("Can not Allocate");
        }

        else
        {
            int item;
            printf("\nEnter your data %d:",i);

        scanf("%d",&item);
        node->data=item;
        node->link=NULL;

        if(head==NULL)
        {
            head=node;
            printf("\nInserted at head\n");
        }

        else{
            temp=head;
            while(temp->link!=NULL)
            {
                temp=temp->link;
            }
            temp->link=node;
        }
        printf("%d--->",temp->data);
                temp=temp->link;

    }
    }
   /* temp=head;
            while(temp!=NULL)
                {
                printf("%d--->",temp->data);
                temp=temp->link;
                }
            printf("NULL");
            */

}

