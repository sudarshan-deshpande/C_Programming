#include <stdio.h>

int main()
{
    char ch;

    printf("Enter digit character: ");
    scanf("%d", &ch);

    int digit = ch - '0';

    printf("Converted digit = %d\n", digit);

    return 0;
}