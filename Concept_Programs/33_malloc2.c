/*
Problem 2 — Dynamic Sum and Average using Heap Memory

Objective:
Dynamically allocate memory for n integers using malloc(),
store user input in heap memory, calculate the sum and average
using pointer traversal and functions, then properly release memory.
*/

#include <stdio.h>
#include <stdlib.h>

void sumaverage(int *arr, int n);
void sumaverage(int *arr, int n)
{
    int sum = 0;
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        sum += *ptr;
    }
    printf("Sum of elements in array = %d\n", sum);
    float avg = (float)sum / n;
    printf("Average = %.2f\n", avg);
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
        scanf("%d", arr);
    }

    sumaverage(arr, n);

    return 0;
}