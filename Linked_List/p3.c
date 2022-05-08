#include <stdio.h>
#include <stdlib.h>

void create_node();
void display_linked_list();

struct node
{
    int data;
    struct node *link;
};
struct node *head, *new_node, *temp, *tempread;
void main()
{
    int choice;
    do
    {
        printf("\n1. Create Linked List\n2. Display the Linked List\n3. To Exit\n");
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
            printf("Exited...");
            break;
        default:
            printf("Please choose default option!..");
            break;
        }
    } while (choice != 3);
}
void create_node()
{
    int i = 1;
    head = NULL;
    while (i == 1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter element of Listed List: ");
        scanf("%d", &new_node->data);
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
        printf("Enter to continuem 1 otherwise 0: ");
        if (scanf("%d", &i) != 1)
        {
            break;
        }
    }
}
void display_linked_list()
{
    printf("Linked List is:\n");
    tempread = head;
    while (tempread != NULL)
    {
        printf("%d\t", tempread->data);
        tempread = tempread->link;
    }
}
