#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[100];
    char *endptr;

    printf("Enter string: ");
    fgets(buffer, sizeof(buffer), stdin);

    long num = strtol(buffer, &endptr, 10);

    if (endptr == buffer)
    {
        printf("Invalid integer\n");
    }
    else if (*endptr == '\n')
    {
        printf("Valid integer\n");
    }
    else
    {
        printf("Partially valid integer\n");
    }

    return 0;
}