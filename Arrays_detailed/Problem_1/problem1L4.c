// Variation 4 — Pointer Increment Style
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements :");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid Input\n");
        return 0;
    }

    int arr[n];

    int *ptr = arr;

    printf("Enter elements : ");
    while (ptr < arr + n)
    {
        scanf("%d", ptr);
        ptr++;
    }

    ptr = arr;

    printf("Elements :");
    while (ptr < arr + n)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}
