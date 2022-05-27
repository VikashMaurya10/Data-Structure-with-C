#include <stdio.h>
int main()
{
    int i, j, temp, length;
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
    for (i = 0; i < length; ++i)
    {
        for (j = i + 1; j < length; ++j)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n");
    for (i = 0; i < length; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
