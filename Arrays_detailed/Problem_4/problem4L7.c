/*
Variation 8 — Maximum Element using Defensive / Hardened Input Handling

This variation focuses on:

validating scanf
preventing uninitialized variables
handling malformed input
defensive systems programming mindset
*/

#include <stdio.h>
#include <stdlib.h>

int input(int *arr, int n);
int maximum(int *arr, int n);

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

int maximum(int *arr, int n)
{
    int max = arr[0];
    for (int *ptr = arr + 1; ptr < arr + n; ptr++)
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

    if (input(arr, n) == 1)
    {
        printf("Invalid input\n");
        free(arr);
        arr = NULL;
        return 1;
    }

    printf("Maximum = %d\n", maximum(arr, n));

    free(arr);
    arr = NULL;

    return 0;
}