/* Write a program to perform following operation on singly linked list:
    a. Create a linked list
    b. Display it
    c. insert a node at the starting of the list
    d. insert a node at the end of the list
    e. insert a node after the specific node
    f. insert a node before the specific node
    g. delete first node
    h. delete last node
    i. delete specific node
*/

#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
};


struct node *START = NULL;

void create()
{
    int n, i, value;
    struct node *newNode, *temp;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    START = NULL;

    for (i = 0; i < n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if (START == NULL)
        {
            START = newNode;
        }
        else
        {
            temp = START;

            while (temp->next != NULL)
                temp = temp->next;

            temp->next = newNode;
        }
    }

    printf("Linked list created successfully.\n");
}



void display()
{
    struct node *temp;

    if (START == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    temp = START;

    printf("Linked List: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}



void insertBeginning()
{
    int value;
    struct node *newNode;

    newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &value);

    newNode->data = value;


    newNode->next = START;


    START = newNode;

    printf("Node inserted at beginning.\n");
}



void insertEnd()
{
    int value;
    struct node *newNode, *temp;

    newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &value);

    newNode->data = value;
    newNode->next = NULL;

    if (START == NULL)
    {
        START = newNode;
    }
    else
    {
        temp = START;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    printf("Node inserted at end.\n");
}



void insertAfter()
{
    int value, num;
    struct node *newNode, *temp;

    printf("Enter the node value after which to insert: ");
    scanf("%d", &num);

    temp = START;

    while (temp != NULL && temp->data != num)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("Specific node not found.\n");
        return;
    }

    newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data for new node: ");
    scanf("%d", &value);

    newNode->data = value;


    newNode->next = temp->next;


    temp->next = newNode;

    printf("Node inserted after %d.\n", num);
}



void insertBefore()
{
    int value, num;
    struct node *newNode, *temp, *prev;

    printf("Enter the node value before which to insert: ");
    scanf("%d", &num);


    if (START == NULL)
    {
        printf("List is empty.\n");
        return;
    }


    if (START->data == num)
    {
        insertBeginning();
        return;
    }

    prev = NULL;
    temp = START;

    while (temp != NULL && temp->data != num)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Specific node not found.\n");
        return;
    }

    newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data for new node: ");
    scanf("%d", &value);

    newNode->data = value;

    newNode->next = temp;
    prev->next = newNode;

    printf("Node inserted before %d.\n", num);
}



void deleteFirst()
{
    struct node *temp;

    if (START == NULL)
    {
        printf("UNDERFLOW: List is empty.\n");
        return;
    }

    temp = START;
    START = START->next;

    free(temp);

    printf("First node deleted.\n");
}



void deleteLast()
{
    struct node *temp, *prev;

    if (START == NULL)
    {
        printf("UNDERFLOW: List is empty.\n");
        return;
    }


    if (START->next == NULL)
    {
        free(START);
        START = NULL;

        printf("Last node deleted.\n");
        return;
    }

    temp = START;
    prev = NULL;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;

    free(temp);

    printf("Last node deleted.\n");
}



void deleteSpecific()
{
    int num;
    struct node *temp, *prev;

    printf("Enter the value of node to delete: ");
    scanf("%d", &num);

    if (START == NULL)
    {
        printf("UNDERFLOW: List is empty.\n");
        return;
    }


    if (START->data == num)
    {
        deleteFirst();
        return;
    }

    prev = NULL;
    temp = START;

    while (temp != NULL && temp->data != num)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Specific node not found.\n");
        return;
    }


    prev->next = temp->next;

    free(temp);

    printf("Node %d deleted.\n", num);
}



int main()
{
    int choice;

    do
    {
        printf("\n========== SINGLY LINKED LIST ==========\n");
        printf("1. Create linked list\n");
        printf("2. Display linked list\n");
        printf("3. Insert at beginning\n");
        printf("4. Insert at end\n");
        printf("5. Insert after specific node\n");
        printf("6. Insert before specific node\n");
        printf("7. Delete first node\n");
        printf("8. Delete last node\n");
        printf("9. Delete specific node\n");
        printf("0. Exit\n");
        printf("=========================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                insertBeginning();
                break;

            case 4:
                insertEnd();
                break;

            case 5:
                insertAfter();
                break;

            case 6:
                insertBefore();
                break;

            case 7:
                deleteFirst();
                break;

            case 8:
                deleteLast();
                break;

            case 9:
                deleteSpecific();
                break;

            case 0:
                printf("Program terminated.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 0);

    return 0;
}

