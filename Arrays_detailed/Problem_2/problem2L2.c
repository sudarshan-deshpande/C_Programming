// Variation 2 — Array Traversal using while Loop

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
    int i = 0;
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    int sum = 0;

    i = 0;

    while (i < n)
    {
        sum += arr[i];
        i++;
    }

    printf("Sum of elements in array = %d\n", sum);

    return 0;
}