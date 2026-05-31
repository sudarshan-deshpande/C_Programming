// Variation 6 — Smallest Element using Manual Character-by-Character Integer Parsing

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int parse_integer(const char *buffer, int *num);
int input(int *arr, int n);
int smallest(int *arr, int n);

int parse_integer(const char *buffer, int *num)
{
    long value = 0;
    int sign = 1;
    int i = 0;

    // handle optional sign
    if (buffer[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (buffer[i] == '+')
    {
        i++;
    }

    // no digits after sign
    if (buffer[i] < '0' || buffer[i] > '9')
    {
        return 1;
    }

    // manual digit parsing
    while (buffer[i] >= '0' && buffer[i] <= '9')
    {
        int digit = buffer[i] - '0';

        value = (value * 10) + digit;

        // overflow protection
        long signed_value = value * sign;

        if (signed_value < INT_MIN || signed_value > INT_MAX)
        {
            return 1;
        }

        i++;
    }

    // reject extra invalid characters
    if (buffer[i] != '\n')
    {
        return 1;
    }

    *num = (int)(value * sign);

    return 0;
}

int input(int *arr, int n)
{
    char buffer[100];

    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            return 1;
        }

        if (parse_integer(buffer, ptr) != 0)
        {
            return 1;
        }
    }

    return 0;
}

int smallest(int *arr, int n)
{
    int smallest = arr[0];

    for (int *ptr = arr + 1; ptr < arr + n; ptr++)
    {
        if (*ptr < smallest)
        {
            smallest = *ptr;
        }
    }

    return smallest;
}

int main()
{
    char buffer[100];
    int n;

    printf("Enter number of elements: ");

    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (parse_integer(buffer, &n) != 0)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (n < 1 || n > 100)
    {
        printf("Invalid input\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("No memory allocated\n");
        return 1;
    }

    printf("Enter elements:\n");

    if (input(arr, n) != 0)
    {
        printf("Invalid input\n");

        free(arr);
        arr = NULL;

        return 1;
    }

    printf("Smallest = %d\n", smallest(arr, n));

    free(arr);
    arr = NULL;

    return 0;
}