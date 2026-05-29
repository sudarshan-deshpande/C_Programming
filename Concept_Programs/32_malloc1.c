/*
Problem 1 — Dynamic Integer Allocation using malloc()

Objective:
Dynamically allocate memory for n integers using malloc(),
store user input in heap memory, display the elements,
and properly release memory using free().
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
        scanf("%d", ptr); // scanf("%d", current_memory_location);
    }

    printf("Elements are: ");
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        printf("%d ", *ptr);
    }

    free(arr);

    arr = NULL;

    return 0;
}