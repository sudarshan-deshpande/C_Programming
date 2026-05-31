#include <stdio.h>

int main()
{
    char buffer[5];

    printf("Enter string: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("String is: %s", buffer);

    return 0;
}