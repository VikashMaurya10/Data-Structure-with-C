#include <stdio.h>
void main()
{
    int i, length;
    printf("Enter the size of Array: ");
    scanf("%d", &length);
    int a[length];
    printf("Enter the Array Element:\n");
    for (i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The Array Element:\n");
    for (i = 0; i < length; i++)
    {
        printf("%d\t", a[i]);
    }
    int n, j, last;
    printf("\nEnter the number of rotation: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        last = a[length - 1];
        for (j = (length - 1); j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = last;
    }
    printf("The Array Element:\n");
    for (i = 0; i < length; i++)
    {
        printf("%d\t", a[i]);
    }
}