// Variation 3 — Pointer Increment Traversal without Index Variable
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
    for (ptr = arr; ptr < arr + n; ptr++)
    {
        scanf("%d", ptr);
    }

    int sum = 0;
    for (ptr = arr; ptr < arr + n; ptr++)
    {
        sum += *ptr;
    }

    printf("Average = %.2f\n", (float)sum / n);

    return 0;
}