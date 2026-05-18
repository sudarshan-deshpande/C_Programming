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

    int position_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (Arr[i] != 0)
        {
            Arr[position_index] = Arr[i];
            position_index++;
        }
    }

    while (position_index < n)
    {
        Arr[position_index] = 0;
        position_index++;
    }

    printf("Modified Array : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", Arr[i]);
    }

    return 0;
}