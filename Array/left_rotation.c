#include <stdio.h>
void main()
{
    int i, j, n, length;
    printf("Enter the size of array: ");
    scanf("%d", &length);
    printf("Enter the Array:\n");
    int a[length];
    for (i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The Array is:\n");
    for (i = 0; i < length; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nEnter the number of left Rotation: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        int first = a[0];
        for (j = 0; j < (length - 1); j++)
        {
            a[j] = a[j + 1];
        }
        a[j] = first;
    }
    printf("The Array Element:\n");
    for (i = 0; i < length; i++)
    {
        printf("%d\t", a[i]);
    }
}