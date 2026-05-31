#include <stdio.h>

int main()
{
    char buffer[100];

    printf("Enter string: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("String is: %s", buffer);

    return 0;
}