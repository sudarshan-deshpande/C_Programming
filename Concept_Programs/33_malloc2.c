/*
Problem 2 — Dynamic Sum and Average using Heap Memory

Objective:
Dynamically allocate memory for n integers using malloc(),
store user input in heap memory, calculate the sum and average
using pointer traversal and functions, then properly release memory.
*/

#include <stdio.h>
#include <stdlib.h>

int sum(int *arr, int n);
float average(int *arr, int n);
int sum(int *arr, int n)
{
    int sum = 0;
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        sum += *ptr;
    }
    return sum;
}

float average(int *arr, int n)
{
    int sum = 0;
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        sum += *ptr;
    }
    float average = (float)sum / n;
    return average;
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
        return 0;
    }

    printf("Enter elements: ");
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        scanf("%d", ptr);
    }

    printf("Sum of elements in array = %d\n", sum(arr, n));
    printf("Average = %.2f\n", average(arr, n));

    free(arr);
    arr = NULL;

    return 0;
}