// Variation 8 — Maximum Element using Recursive Array Traversal

#include <stdio.h>
#include <stdlib.h>

void input(int *arr, int n);
int maximum(int *arr, int n);

void input(int *arr, int n)
{
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        scanf("%d", ptr);
    }
}

int maximum(int *arr, int n)
{
    if (n == 1)
    {
        return arr[0];
    }

    int smallMax = maximum(arr + 1, n - 1);

    if (arr[0] > smallMax)
    {
        return arr[0];
    }

    return smallMax;
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
    input(arr, n);

    printf("Maximum = %d\n", maximum(arr, n));

    free(arr);
    arr = NULL;

    return 0;
}