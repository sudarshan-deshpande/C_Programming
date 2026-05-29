// Variation 7 — Dynamic Memory based Average Calculator using Pointer Decrement Reverse Traversal
#include <stdio.h>
#include <stdlib.h>

float average(int *arr, int n);
float average(int *arr, int n)
{
    int sum = 0;
    for (int *ptr = arr + n - 1; ptr >= arr; ptr--) // Ithach hagtos
    {
        sum += *ptr;
    }

    float avg = (float)sum / n;
    return avg;
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
    printf("Enter elements: ");
    for (int *ptr = arr + n - 1; ptr >= arr; ptr--) // Ithach hagtos
    {
        scanf("%d", ptr);
    }

    printf("Average = %.2f\n", average(arr, n));

    free(arr);
    arr = NULL;

    return 0;
}