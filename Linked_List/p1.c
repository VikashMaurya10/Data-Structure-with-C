
#include <stdio.h>
#include <stdlib.h>
int count = 0;
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    struct Node *temp;
    head = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    // link first and second node
    head->data = 7;
    head->next = second;
    // link  second node and third
    second->data = 66;
    second->next = third;
    // linkthird and forth
    third->data = 55;
    third->next = forth;
    // link forth and Null
    forth->data = 99;
    forth->next = NULL;

    temp = head;
    while (temp != NULL)
    {
        printf("Element :%d\n", temp->data);
        temp = temp->next;
        count++;
    }
    printf("Number of nodes: %d", count);
    return 0;
}
