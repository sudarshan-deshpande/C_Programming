// Variation 1 — Basic Array Traversal using Separate Loops
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
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of elements in array = %d\n", sum);

    return 0;
}

// CPU cache prefetchers predict sequential access.
// *KERNEL*