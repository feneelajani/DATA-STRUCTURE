//Set-2

//write a program to implement queue with following operation insert, delete, display, exit

# include <stdio.h>
# define MAX 100

int q[MAX], front = -1, rear = -1;

void insert()
{
    int x;
    if (rear == MAX - 1)
        printf("Queue is full\\n");

    else {
            printf("Enter value: ");
            scanf("%d", &x);

            if (front == -1) front = 0;
            q[++rear] = x;
        }
}

void deleteItem()
{
    if (front == -1 || front > rear)
            printf("Queue is empty\\n");

    else
        {
            printf("Deleted: %d\\n", q[front++]);
            if (front > rear) front = rear = -1;
        }
}

void display()
{

}
