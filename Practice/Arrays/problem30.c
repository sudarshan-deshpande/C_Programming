#include <stdio.h>

int main()
{
    int n;
    int Arr[100];

    printf("Enter n :");
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Invalid Input\n");
        return 0;
    }

    printf("Enter elements : ");

    int actual_sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &Arr[i]);
        actual_sum += Arr[i];
    }

    int expected_sum = (n * (n + 1)) / 2;

    int missing_number = expected_sum - actual_sum;

    printf("Missing number = %d\n", missing_number);

    return 0;
}