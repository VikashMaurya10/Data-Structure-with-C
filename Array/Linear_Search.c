#include <stdio.h>
#define max_size 5
void main()
{
    int i, data;
    int a[max_size] = {1, 2, 3, 4, 5};
    printf("Enter the data to search: ");
    scanf("%d", &data);
    for (i = 0; i < max_size; i++)
    {
        if (a[i] == data)
        {
            printf("The index of the element is: %d", i);
            break;
        }
    }
    if (i == max_size)
    {
        printf("The element not found!\n");
    }
}