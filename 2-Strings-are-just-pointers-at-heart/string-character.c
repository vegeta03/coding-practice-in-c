#include <string.h>
#include <stdio.h>

char *my_strchr(const char *str, int c)
{
    if (str == NULL)
    {
        return NULL;
    }

    while (*str != '\0')
    {
        if (*str == c)
        {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}

int main()
{
    char *c = my_strchr("shyam", 'a');
    if (c != NULL)
    {
        printf("%c\n", *c);
    }
    else
    {
        printf("Character not found in string.");
    }
    return 0;
}