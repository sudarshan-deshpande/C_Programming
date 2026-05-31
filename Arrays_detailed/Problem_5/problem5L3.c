// Variation 3 — Defensive / Hardened Input Traversal
#include <stdio.h>
#include <stdlib.h>

int input(int *arr, int n);
int smallest(int *arr, int n);

int input(int *arr, int n)
{
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        if (scanf("%d", ptr) != 1)
        {
            return 1;
        }
    }
    return 0;
}
int smallest(int *arr, int n)
{
    int smallest = arr[0];

    for (int *ptr = arr + 1; ptr < arr + n; ptr++)
    {
        if (*ptr < smallest)
        {
            smallest = *ptr;
        }
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
        return 1;
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