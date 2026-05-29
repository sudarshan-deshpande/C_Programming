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

    printf("Enter elements in heap memory: ");
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        scanf("%d", ptr);
    }

    int extra;
    printf("Enter number of extra elements: ");
    scanf("%d", &extra);

    if (extra < 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    // Temporary pointer vaparneka to avoid memory leakage
    int *temp = realloc(arr, (n + extra) * sizeof(int));

    if (temp == NULL)
    {
        printf("Reallocation failed\n");
        free(arr);
        arr = NULL;
        return 1;
    }

    arr = temp; // arr ku kaisa malum hoinga next address ??

    printf("Enter extra elements: ");
    for (int *ptr = arr + n; ptr < arr + n + extra; ptr++)
    {
        scanf("%d", ptr);
    }

    printf("Elements in array are: ");
    for (int *ptr = arr; ptr < arr + n + extra; ptr++)
    {
        printf("%d ", *ptr);
    }

    free(arr);

    arr = NULL;
    return 0;
}

/*
Task: modular bananeka
    1. get size
    2. allocate
    3. input
    4. resize
    5. input extra
    6. display
    7. cleanup
*/