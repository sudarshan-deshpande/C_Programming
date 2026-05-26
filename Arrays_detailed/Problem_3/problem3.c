/*
Problem 3: Average of Array Elements

Objective:
Calculate the average of all elements in an array.

Concepts Practiced:
- array traversal
- sum accumulation
- integer vs floating-point division
- typecasting
- formatted output using %.2f
- basic input validation
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    float avg = (float)sum / n;

    printf("Average = %.2f\n", avg);

    return 0;
}