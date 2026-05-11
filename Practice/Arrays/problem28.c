#include <stdio.h>

int main()
{
    int n;
    int Arr[100];

    printf("Enter number of elements : ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid Input\n");
        return 0;
    }

    printf("Enter elements : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (Arr[i] == Arr[j])
            {
                printf("First repeating element = %d\n", Arr[i]);
                found = 1;
                break;
            }
        }

        if (found)
        {
            break;
        }
    }

    if (!found)
    {
        printf("No repeating element found\n");
    }

    return 0;
}