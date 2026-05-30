// Variation 6 — Maximum Element using Dynamic Memory Allocation

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
    scanf("%d", &n);

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
    input(arr, n);

    printf("Maximum = %d\n", maximum(arr, n));

    free(arr);
    arr = NULL;

    return 0;
}