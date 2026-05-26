// Variation 1 — Average Calculation using while Loop Traversal

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

    int i = 0;
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    i = 0;
    int sum = 0;
    while (i < n)
    {
        sum += arr[i];
        i++;
    }

    printf("Average = %.2f\n", (float)sum / n);
    return 0;
}