/*
Problem 4 — Dynamic Reverse Traversal using Pointers

Objective:
Write a C program to dynamically allocate memory for n integers,
store elements in heap memory, and display the elements in reverse
order using pointer decrement traversal, then properly free memory.
*/

#include <stdio.h>
#include <stdlib.h>

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
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        scanf("%d", ptr);
    }

    printf("Reverse order: ");
    for (int *ptr = arr + n - 1; ptr >= arr; ptr--)
    {
        printf("%d ", *ptr);
    }

    free(arr);

    arr = NULL;

    return 0;
}