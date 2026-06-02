/*
Problem 6: Find Maximum and Minimum in Array

Requirements:
- Input number of elements (1 to 100)
- Input array elements
- Find largest and smallest element
- Use single array traversal
- If size is invalid, print:
  "Invalid input"
*/

#include <stdio.h>
#include <stdlib.h>

int input(int *arr, int n);
void maxmin(int *arr, int n, int *max, int *min);

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

void maxmin(int *arr, int n, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];

    for (int *ptr = arr + 1; ptr < arr + n; ptr++)
    {
        if (*ptr > *max)
        {
            *max = *ptr;
        }

        if (*ptr < *min)
        {
            *min = *ptr;
        }
    }
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
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements: ");

    if (input(arr, n))
    {
        printf("Invalid input\n");
        free(arr);
        return 1;
    }

    int max, min;

    maxmin(arr, n, &max, &min);

    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);

    free(arr);

    return 0;
}