#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements in array : ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid Input\n");
        return 0;
    }

    int Arr[n];

    printf("Enter elements in array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int current_length = 0;
    int max_length = 0;

    for (int i = 1; i < n; i++)
    {
        if (Arr[i] > Arr[i - 1])
        {
            current_length++;
        }
        else
        {
            current_length = 1;
        }

        if (current_length > max_length)
        {
            max_length = current_length;
        }
    }

    printf("Longest increasing continuous subarray length = %d\n", max_length);

    return 0;
}