// Variation 5 — Smallest Element using fgets() + strtol() Hardened Parsing

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int input(int *arr, int n);
int smallest(int *arr, int n);

int input(int *arr, int n)
{
    char buffer[100];
    char *endptr;
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            return 1;
        }

        // numeric parsing
        long num = strtol(buffer, &endptr, 10);

        // no numeric conversion
        if (endptr == buffer)
        {
            return 1;
        }

        // extra invalid characters remained after numeric parsing
        if (*endptr != '\n')
        {
            return 1;
        }

        if (num < INT_MIN || num > INT_MAX)
        {
            return 1;
        }
        *ptr = num;
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
    char buffer[100];
    char *endptr;

    int n;
    printf("Enter number of elements: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        printf("Invalid input\n");
        return 1;
    }

    long num = strtol(buffer, &endptr, 10);
    if (endptr == buffer)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (*endptr != '\n')
    {
        printf("Invalid input\n");
        return 1;
    }

    if (num < INT_MIN || num > INT_MAX)
    {
        printf("Invalid input\n");
        return 1;
    }

    n = num;

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