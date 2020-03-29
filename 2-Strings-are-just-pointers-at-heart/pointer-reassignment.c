#include <stdio.h>
#include <stdlib.h>

int value = 10;
int *value_ptr = &value;

int some_function(int *some_ptr)
{
    some_ptr = (int *)malloc(sizeof(int));
    *some_ptr = 20;
}

int main()
{
    some_function(value_ptr);
    printf("%d\n", value);
}
