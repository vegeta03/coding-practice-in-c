#include <stdio.h>

int length = 10;
int breadth = 5;

int *length_ptr = &length;
int *breadth_ptr = &breadth;

int *test = length_ptr;
*test = 25;

int main()
{
    printf("Printing dereferenced pointers:\n");
    printf("%d\n", *length_ptr);
    printf("%d\n", *breadth_ptr);

    printf("Printing pointers:\n");
    printf("%p\n", length_ptr);
    printf("%p\n", breadth_ptr);

    return 0;
}