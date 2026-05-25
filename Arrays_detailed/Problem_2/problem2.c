/*
Problem 2: Sum of Array Elements

Write a C program to:
- Read n elements into an array
- Calculate sum using loop traversal
- Print final sum

Constraints:
1 <= n <= 100

If invalid size:
Print "Invalid input"
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of elements in array is : %d\n", sum);

    return 0;
}