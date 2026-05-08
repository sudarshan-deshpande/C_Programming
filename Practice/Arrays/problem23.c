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

    int Arr[n], Brr[n];

    printf("Enter elements in first array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Enter elements in second array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Brr[i]);
    }

    int is_rotation = 0;

    // Try every starting index in Arr
    for (int start = 0; start < n; start++)
    {
        int match = 1;

        for (int i = 0; i < n; i++)
        {
            if (Arr[(start + 1) % n] != Brr[i])
            {
                match = 0;
                break;
            }
        }

        if (match == 1)
        {
            is_rotation = 1;
            break;
        }
    }

    if (is_rotation == 1)
    {
        printf("Second array is rotation of first array\n");
    }
    else
    {
        printf("Second array is not rotation of first array\n");
    }

    return 0;
}