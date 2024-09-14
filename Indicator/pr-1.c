#include <stdio.h>

int findLength(char *ptr)
{
    int length = 0;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    return length;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = findLength(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}
