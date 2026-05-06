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

    int Arr[n];

    printf("Enter elements in array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int first = Arr[0];

    // Shift elements left
    for (int i = 0; i < n - 1; i++)
    {
        Arr[i] = Arr[i + 1];
    }

    // Put first element at end
    Arr[n - 1] = first;

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Arr[i]);
    }

    printf("\n");

    return 0;
}