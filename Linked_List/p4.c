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
struct node
{
    int data;
    struct node *link;
};
struct node *head, *new_node, *temp, *temp1;
void main()
{
    int choice;
    do
    {
        Sleep(2000);
        printf("\n******** MANU ********");
        printf("\n1. Create Linked List\n2. Display the Linked List\n3. Display the number of node\n4. Insert node Beginning\n5. Insert node at End\n6. Insert node after the position\n7. Delete node at Potion\n8. To Exit\n");
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
            printf("\nExited...");
            break;
        default:
            printf("\nPlease choose default option!..\n");
            break;
        }
    } while (choice != 8);
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
}
void display_linked_list()
{
    if (head == NULL)
    {
        printf("The Linked list is empty!...");
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
        printf("The Linked list is empty!...");
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
        printf("The Linked list is empty!...");
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
    }
    printf("\n");
}
void insert_node_end()
{
    if (head == NULL)
    {
        printf("The Linked list is empty!...");
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
    }
    printf("\n");
}
void insert_node_after_position()
{
    if (head == NULL)
    {
        printf("The Linked list is empty!...");
    }
    else
    {
        int i = 0,index;
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
    }
    printf("\n");
}
void delete_node_at_potion()
{
    if (head == NULL)
    {
        printf("The Linked list is empty!...");
    }
    else
    {
        int i = 0, index;
        temp = head;
        printf("Enter the Insertion Position Number: ");
        scanf("%d", &index);
        while (i != (index - 1))
        {
            temp1 = temp;
            temp = temp->link;
            i++;
        }
        temp1->link = temp->link;
        printf("Deleted!....\n");
    }
}
