#include <stdio.h>
#include <limits.h>

int main()
{
    int n, k;
    int Arr[100];

    printf("Enter number of elements : ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid Input\n");
        return 0;
    }

    printf("Enter elements :");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Enter k :");
    scanf("%d", &k);

    if (k < 1)
    {
        printf("Invalid Input\n");
        return 0;
    }

    int previous_largest = INT_MAX;
    int current_largest;
    int found;

    for (int iCount = 0; iCount < k; iCount++)
    {
        found = 0;
        for (int i = 0; i < n; i++)
        {
            if (Arr[i] < previous_largest)
            {
                if (!found || Arr[i] > current_largest)
                {
                    current_largest = Arr[i];
                    found = 1;
                }
            }
        }
        if (!found)
        {
            printf("K-th largest distinct element not found\n");
            return 0;
        }

        previous_largest = current_largest;
    }
    printf("%d-th largest distinct element is = %d", k, current_largest);

    return 0;
}