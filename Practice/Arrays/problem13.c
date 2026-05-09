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

    int Arr[n];
    printf("Enter elements in array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        int already_counted = 0;

        for (int k = 0; k < i; k++)
        {
            if (Arr[i] == Arr[k])
            {
                already_counted = 1;
                break;
            }
        }
        if (already_counted == 1)
        {
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if (Arr[i] == Arr[j])
            {
                count++;
            }
        }
        printf("%d occurs %d times\n", Arr[i], count);
    }
    return 0;
}