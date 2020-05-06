#include <string.h>
#include <stdio.h>

size_t my_strlen(const char *str)
{
    if (str == NULL)
    {
        return 0;
    }

    int length = 0;
    const char *ch = str;

    while (*ch != '\0')
    {
        length++;
        ch++;
    }

    return length;
}

int main()
{
    printf("%d\n", my_strlen("Shyam"));
    printf("%d\n", strlen("Shyam"));

    return 0;
}