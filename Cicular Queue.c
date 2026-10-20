
#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue()
{
    int x;

    if((rear+1)%MAX == front)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter element: ");
        scanf("%d", &x);

        if(front == -1)
            front = 0;

        rear = (rear+1)%MAX;
        queue[rear] = x;

        printf("Element inserted\n");
    }
}

void dequeue()
{
    if(front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted element = %d\n", queue[front]);

        if(front == rear)
            front = rear = -1;
        else
            front = (front+1)%MAX;
    }
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        i = front;

        while(1)
        {
            printf("%d ", queue[i]);

            if(i == rear)
                break;

            i = (i+1)%MAX;
        }

        printf("\n");
    }
}

int main()
{
    int ch;

    do
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while(ch != 4);

    return 0;
}

