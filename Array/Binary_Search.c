// Must be array is shorted.
#include <stdio.h>
#define Max_Size 5
int Binery_Search(int arr[], int, int);
int main()
{
    int p, data, *a, arr[Max_Size] = {11, 22, 33, 44, 55};
    printf("Enter the data to search: ");
    scanf("%d", &data);
    a = arr;
    p = Binery_Search(a, Max_Size, data);
    printf("The Index of the element is: %d\n", p);
    return 0;
}
int Binery_Search(int arr[], int n, int data)
{
    int l = 0, r = (n - 1), mid;
    while (l < r)
    {
        mid = (l + r) / 2;
        if (data == arr[mid])
        {
            return mid;
        }
        else if (data < arr[mid])
        {
            r = (mid - 1);
        }
        else // if (data > arr[mid])
        {
            l = mid + 1;
        }
    }
    printf("data is not present!\n");
    return -1;
}