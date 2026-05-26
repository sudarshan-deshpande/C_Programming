// Variation 4 — Function-based Average Calculator using Pointer Traversal
#include <stdio.h>
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

    int arr[n];
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        scanf("%d", ptr);
    }

    printf("Average = %.2f\n", average(arr, n));

    return 0;
}