#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void create_node();
void display_linked_list();
void insert_in_begining();
void number_of_nodes();
void insert_node_end();
void insert_node_after_position();
void delete_node_at_potion();
void delete_node_at_begining();
void delete_node_at_end();
struct node
{
    int data;
    struct node *link;
};
struct node *head, *new_node, *temp, *temp1;
void main()
{
    system("cls");
    int choice;
    do
    {
        Sleep(1800);
        printf("\n******** MANU ********");
        printf("\n1. Create Linked List\n2. Display the Linked List\n3. Display the number of node\n4. Insert node Beginning\n5. Insert node at End\n6. Insert node after the position\n7. Delete node at Position\n8. Delete node at Begining\n9. Delete node at end\n10. To Exit\n");
        printf("\nEnter Your Option Number: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create_node();
            break;
        case 2:
            display_linked_list();
            break;
        case 3:
            number_of_nodes();
            break;
        case 4:
            insert_in_begining();
            break;
        case 5:
            insert_node_end();
            break;
        case 6:
            insert_node_after_position();
            break;
        case 7:
            delete_node_at_potion();
            break;
        case 8:
            delete_node_at_begining();
            break;
        case 9:
            delete_node_at_end();
            break;
        case 10:
            printf("\n-----Exited!-----\n\n");
            break;
        default:
            printf("\nPlease choose default option!..\n");
            break;
        }
    } while (choice != 10);
}
void create_node()
{
    int i;
    head = NULL;
    printf("\n-1 for end the Linked List.\n");
    printf("Enter the element of Linked List: ");
    scanf("%d", &i);
    while (i != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = i;
        new_node->link = NULL;
        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->link = new_node;
            temp = new_node;
        }
        printf("Enter the element of Linked List: ");
        scanf("%d", &i);
    }
    printf("\nThe Linked List is created!..\n");
}
void display_linked_list()
{
    if (head == NULL)
    {
        printf("\nThe Linked list is empty!...\n");
    }
    else
    {
        printf("\nLinked List is:\n");
        temp = head;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}
void number_of_nodes()
{
    if (head == NULL)
    {
        printf("\nThe Linked list is empty!...\n");
    }
    else
    {
        int count = 0;
        temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->link;
        }
        printf("\nTotal number of Nodes in the Linked List is: %d", count);
        printf("\n");
    }
}
void insert_in_begining()
{
    if (head == NULL)
    {
        printf("\nThe Linked list is empty!...\n");
    }
    else
    {
        int i;
        printf("\n-1 for end the Linked List.\n");
        printf("Enter the element of Linked List: ");
        scanf("%d", &i);
        while (i != -1)
        {
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->data = i;
            new_node->link = head;
            head = new_node;
            printf("Enter the element of Linked List: ");
            scanf("%d", &i);
        }
        printf("\nThe node is Inserted at the Begining!...\n");
    }
}
void insert_node_end()
{
    if (head == NULL)
    {
        printf("\nThe Linked list is empty!...\n");
    }
    else
    {
        int num;
        printf("Enter the element of Linked List: ");
        scanf("%d", &num);
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        temp = head;
        new_node->link = NULL;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new_node;
        printf("\nThe node is inserted at the end!...\n");
    }
}
void insert_node_after_position()
{
    if (head == NULL)
    {
        printf("\nThe Linked list is empty!...\n");
    }
    else
    {
        int i = 0, index;
        printf("Enter the Insertion Position Number: ");
        scanf("%d", &index);
        new_node = (struct node *)malloc(sizeof(new_node));
        printf("Enter the Linked List element: ");
        scanf("%d", &new_node->data);
        temp = head;
        while (i != (index - 1))
        {
            temp = temp->link;
            i++;
        }
        new_node->link = temp->link;
        temp->link = new_node;
        printf("\nThe node is Inserted!..\n");
    }
}
void delete_node_at_potion()

{
    if (head == NULL)
    {
        printf("\nThe Linked list is empty!...\n");
    }
    else
    {
        int i = 0, index;
        printf("Enter the Insertion Position Number: ");
        scanf("%d", &index);
        if (index == 1)
        {
            delete_node_at_begining();
        }
        else
        {
            temp = head;
            while (i != (index - 1))
            {
                temp1 = temp;
                temp = temp->link;
                i++;
            }
            temp1->link = temp->link;
            printf("\nThe given position node is Deleted!....\n");
        }
    }
}
void delete_node_at_begining()
{
    if (head == NULL)
    {
        printf("\nThe Linked list is empty!...\n");
    }
    else
    {
        head = head->link;
        printf("\nThe First Node is Deleted!....\n");
    }
}
void delete_node_at_end()
{
    if (head == NULL)
    {
        printf("\nThe Linked list is empty!...\n");
    }
    else
    {
        int i = 0, count = 0, no_nodes;
        temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->link;
        }
        temp1 = head;
        while (i < (count - 2))
        {
            temp1 = temp1->link;
            i++;
        }
        temp1->link = NULL;
        printf("\nThe Last Node is Deleted!....\n");
    }
}