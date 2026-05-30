// Variation 3 — Maximum Element using Pointer Increment Traversal
#include <stdio.h>

int maximum(int *arr, int n);
int maximum(int *arr, int n)
{
    int max = arr[0];
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        if (*ptr > max)
        {
            max = *ptr;
        }
    }
    return max;
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter elements: ");
    int arr[n];
    int *ptr = arr;
    while (ptr < arr + n)
    {
        scanf("%d", ptr);
        ptr++;
    }

    printf("Maximum = %d\n", maximum(arr, n));

    return 0;
}
