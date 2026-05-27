// Variation 5 — Dynamic Memory based Average Calculator using malloc()

#include <stdio.h>
#include <stdlib.h>

float average(int *arr, int n);

float average(int *arr, int n)
{
    int sum = 0;

    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        sum += *ptr;
    }

    return (float)sum / n;
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

    // Heap memory allocation
    int *arr = malloc(n * sizeof(int));

    // Allocation failure check
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

    printf("Average = %.2f\n", average(arr, n));

    // Release heap memory
    free(arr);

    // Good defensive habit
    arr = NULL;

    return 0;
}