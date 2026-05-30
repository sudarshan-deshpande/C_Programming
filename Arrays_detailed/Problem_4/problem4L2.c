// Variation 2 — Maximum Element using Pointer Arithmetic Traversal
#include <stdio.h>

int maximum(int *arr, int n);
int maximum(int *arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
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
    int i = 0;
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    printf("Maximum = %d\n", maximum(arr, n));

    return 0;
}