/*
Problem 5 — Dynamic Array Resizing using realloc()

Objective:
Write a C program to dynamically allocate memory for n integers,
store user input in heap memory, then resize the array using realloc()
to store additional elements, display all elements using pointer traversal,
and properly free allocated memory.
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
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements: ");

    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        scanf("%d", ptr);
    }

    int extra;

    printf("How many more elements do you want? ");
    scanf("%d", &extra);

    if (extra < 1)
    {
        printf("Invalid extra size\n");

        free(arr);
        arr = NULL;

        return 1;
    }

    // Temporary pointer used to safely handle realloc failure
    int *temp = realloc(arr, (n + extra) * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed\n");

        free(arr);
        arr = NULL;

        return 1;
    }

    // Update arr only after successful realloc
    arr = temp;

    printf("Enter %d extra elements: ", extra);

    // Fill only newly added memory region
    for (int *ptr = arr + n; ptr < arr + n + extra; ptr++)
    {
        scanf("%d", ptr);
    }

    printf("All elements are: ");

    // Print complete resized array
    for (int *ptr = arr; ptr < arr + n + extra; ptr++)
    {
        printf("%d ", *ptr);
    }

    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}