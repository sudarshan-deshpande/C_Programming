// Variation 4 — Maximum Element using Reverse Pointer Traversal
#include <stdio.h>

int maximum(int *arr, int n);
int maximum(int *arr, int n)
{
    int max = arr[0];
    for (int *ptr = arr + n - 1; ptr >= arr; ptr--)
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

    int arr[n];

    printf("Enter elements: ");
    for (int *ptr = arr + n - 1; ptr >= arr; ptr--)
    {
        scanf("%d", ptr);
    }

    printf("Maximum = %d\n", maximum(arr, n));

    return 0;
}