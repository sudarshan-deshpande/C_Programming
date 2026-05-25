// Variation 3 — Pointer Arithmetic based Array Access
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    int arr[n];

    int *ptr = arr;
    printf("Enter elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of elements in array = %d\n", sum);

    return 0;
}