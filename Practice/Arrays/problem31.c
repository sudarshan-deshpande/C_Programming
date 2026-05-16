#include <stdio.h>

int main()
{
    int n;
    int Arr[100];

    printf("Enter n : ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Invalid Input\n");
        return 0;
    }

    printf("Enter elements : ");

    int xor_array = 0;
    int xor_full = 0;

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &Arr[i]);
        xor_array = xor_array ^ Arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        xor_full = xor_full ^ i;
    }

    int missing_number = xor_full ^ xor_array;

    printf("Missing number = %d\n", missing_number);

    return 0;
}