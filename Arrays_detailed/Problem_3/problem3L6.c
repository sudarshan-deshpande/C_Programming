// Variation 6 — Dynamic Memory based Average Calculator using while Loop Pointer Traversal
#include <stdio.h>
#include <stdlib.h>

float average(int *arr, int n);
float average(int *arr, int n)
{
    int sum = 0;
    int *ptr = arr;
    while (ptr < arr + n)
    {
        sum += *ptr;
        ptr++;
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
        printf("No memory allocation\n");
        return 1;
    }

    int *ptr = arr;
    printf("Enter elements in array: ");
    while (ptr < arr + n)
    {
        scanf("%d", ptr);
        ptr++;
    }

    printf("Average = %.2f\n", average(arr, n));

    free(arr);
    arr = NULL;

    return 0;
}