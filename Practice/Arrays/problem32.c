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

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int found;

    for (int num = 1; num <= n; num++)
    {
        found = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (Arr[i] == num)
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("Missing number = %d\n", num);
            break;
        }
    }

    return 0;
}