// Variation 2 — Smallest Element using Reverse Pointer Traversal

#include <stdio.h>
#include <stdlib.h>

int input(int *arr, int n);
int smallest(int *arr, int n);

int input(int *arr, int n)
{
    int *ptr = arr + n - 1;
    while (ptr >= arr)
    {
        if (scanf("%d", ptr) != 1)
        {
            return 1;
        }
        ptr--;
    }
    return 0;
}

int smallest(int *arr, int n)
{
    int smallest = arr[n - 1];
    int *ptr = arr + n - 1;
    while (1)
    {
        if (*ptr < smallest)
        {
            smallest = *ptr;
        }

        if (ptr == arr)
        {
            break;
        }
        ptr--;
    }
    return smallest;
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    if (n < 1 || n > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("No memory allocated\n");
        return 1;
    }

    printf("Enter elements: ");
    if (input(arr, n) != 0)
    {
        printf("Invalid input\n");
        free(arr);
        arr = NULL;
        return 1;
    }

    printf("Smallest = %d\n", smallest(arr, n));

    free(arr);
    arr = NULL;

    return 0;
}