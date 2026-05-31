#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[100];
    char *endptr;
    printf("Enter string: ");
    fgets(buffer, sizeof(buffer), stdin);

    long num = strtol(buffer, &endptr, 10);

    printf("%ld\n", num);
    printf("%s\n", endptr);
    return 0;
}