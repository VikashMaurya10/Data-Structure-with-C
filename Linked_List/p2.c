#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    // int choice;
    struct node *head, *new_node, *temp;
    head = NULL;
    int choice;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        printf("Do you want to continue (1, 0): ");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}