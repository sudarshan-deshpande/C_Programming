#include <stdio.h>

int main()
{
    int n, k;

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

    printf("Enter k : ");
    scanf("%d", &k);

    if (k < 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    k = k % n; // handle large k

    // Perform right rotation k times
    for (int r = 0; r < k; r++)
    {
        int last = Arr[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            Arr[i] = Arr[i - 1];
        }

        Arr[0] = last;
    }

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Arr[i]);
    }

    printf("\n");

    return 0;
}