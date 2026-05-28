/*
Problem 3 — Dynamic Maximum and Minimum Finder using malloc()

Objective:
Write a C program to dynamically allocate memory for n integers,
store user input in heap memory, find the maximum and minimum
elements using functions and pointer traversal, then free the memory.
*/

#include <stdio.h>
#include <stdlib.h>

int maximum(int *arr, int n);
int minimum(int *arr, int n);

int maximum(int *arr, int n)
{
    int max = *arr;
    for (int *ptr = arr + 1; ptr < arr + n; ptr++)
    {
        if (*ptr > max)
        {
            max = *ptr;
        }
    }

    return max;
}

int minimum(int *arr, int n)
{
    int min = *arr;
    for (int *ptr = arr + 1; ptr < arr + n; ptr++)
    {
        if (*ptr < min)
        {
            min = *ptr;
        }
    }

    return min;
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

    printf("Enter elements in array: ");
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        scanf("%d", ptr);
    }

    printf("Maximum = %d\n", maximum(arr, n));
    printf("Minimum = %d\n", minimum(arr, n));

    free(arr);

    arr = NULL;

    return 0;
}