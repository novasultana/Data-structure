#include <stdio.h>
#include<stdlib.h>
# define SIZE 20

void enqueue();
void dequeue();
void show();
int queue[SIZE];
int front=-1,rear=-1,item,i=0;

void enqueue()
{
    if (rear == SIZE - 1)
    {
        printf("Overflow \n");
    }
    else
    {
        if (front == - 1)
        {
            front = 0;
        }
        printf("Element to be inserted in the Queue: \n ");
        scanf("%d", &item);
        rear = rear + 1;
        queue[rear] = item;
    }
}

void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", queue[front]);
        front = front + 2;
    }
}

void show()
{

    if (front==-1)
    {
        printf("Empty Queue \n");
    }

    else
    {
        printf("\nQueue is : ");
        for ( i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);

        }
        printf("\n");
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n \n");
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n\n");
        printf("Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            show();
            break;

        case 4:
            exit(0);


        default:
            printf(" Choose another Option:\n");
        }
    }
}

