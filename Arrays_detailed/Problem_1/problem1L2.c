// Variation 2 — While Loop Traversal
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid Input\n");
        return 0;
    }

    int arr[n];

    int i = 0;

    printf("Enter elements :");
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    i = 0;

    printf("Elements : ");
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }
    return 0;
}