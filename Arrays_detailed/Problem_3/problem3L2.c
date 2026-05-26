// Variation 2 — Pointer Arithmetic based Average Calculation
#include <stdio.h>

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
    int *ptr = arr;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    ptr = arr;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += *ptr;
        ptr++;
    }

    printf("Average = %.2f\n", (float)sum / n);

    return 0;
}