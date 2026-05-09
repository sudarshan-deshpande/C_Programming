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

    printf("Enter k : ");
    scanf("%d", &k);

    if (k < 1)
    {
        printf("Invalid Input\n");
        return 0;
    }

    int previous_smallest = INT_MIN;
    int current_smallest;
    int found;

    for (int iCount = 0; iCount < k; iCount++)
    {
        found = 0;

        for (int i = 0; i < n; i++)
        {
            if (Arr[i] > previous_smallest)
            {
                if (!found || Arr[i] < current_smallest)
                {
                    current_smallest = Arr[i];
                    found = 1;
                }
            }
        }

        if (!found)
        {
            printf("K-th smallest distinct element not found\n");
            return 0;
        }
        previous_smallest = current_smallest;
    }

    printf("%d-th smallest distinct element = %d", k, current_smallest);

    return 0;
}
