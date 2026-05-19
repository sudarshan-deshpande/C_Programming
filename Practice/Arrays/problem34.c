#include <stdio.h>

int main()
{
    int n;
    int Arr[100];
    int Temp[100];

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

    int write_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (Arr[i] < 0)
        {
            Temp[write_index] = Arr[i];
            write_index++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (Arr[i] >= 0)
        {
            Temp[write_index] = Arr[i];
            write_index++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        Arr[i] = Temp[i];
    }

    printf("Modified array : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", Arr[i]);
    }

    return 0;
}