#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[100],top=-1,item,i;
int push()
{

    if(top==(N-1))
    {
        printf("Overflow!");
    }
    else
    {
        printf("Enter your Item:");
        scanf("%d",&item);
        top = top + 1;
        stack[top] = item;
        printf("Operation Successful");
    }

}

int pop()
{

    if(top==(-1))
    {
        printf("Underflow!");
    }
    else
    {
        printf("Enter your Item:");
        top = top - 1;
        stack[top] = item;
        printf("Deletion Successful");
    }

}

int display()
{
    if(top==-1)
    {
        printf("Stack is Empty..!!!!");
    }
    else
    {
        i=top;
        for(;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
    }

}

int main()

{
    int choice,item;

    while(1)
    {
        printf("\nChoice:\n 1-push\n 2-pop \n 3.display \n 4.Exit \n others:Continue\n");

        printf("Enter your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
            printf("Your Choose Insert/Push Operation:\n");
            push();
            break;

        case 2:
            printf("Your Choose Delete/Pop Operation:\n");
            pop();
            break;

        case 3:
            printf("Your Choose Display Operation:\n");
            display();
            break;

        case 4:
            exit(0);

        default:
            printf(" Choose another iteration:\n");

        }

    }

}


