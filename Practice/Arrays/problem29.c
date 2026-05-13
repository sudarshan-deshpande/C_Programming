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

    int max_frequency = 0;
    int max_element;

    for (int i = 0; i < n; i++)
    {
        int frequency = 0;

        for (int j = 0; j < n; j++)
        {
            if (Arr[i] == Arr[j])
            {
                frequency++;
            }
        }

        if (frequency > max_frequency)
        {
            max_frequency = frequency;
            max_element = Arr[i];
        }
    }

    printf("Element with maximum frquency : %d\n", max_element);
    printf("Frequency = %d\n", max_frequency);

    return 0;
}