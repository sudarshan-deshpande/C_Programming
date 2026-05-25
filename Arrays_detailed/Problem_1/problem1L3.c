// Variation 3 — Pointer Arithmetic Version

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
    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i); // base address + 4 bytes
    }

    printf("Elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i)); // value at base address + 4 bytes
    }

    return 0;
}