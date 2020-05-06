#include <stdio.h>

char* my_strcat(const char* dest, const char* src) {
    if(dest == NULL || src == NULL) {
        return dest;
    }

    char* d = dest;

    while(*d != '\0') {
        d++;
    }

    while(*src != '\0') {
        *d = *src;
        d++;
        src++;
    }

    *d = '\0';

    return dest;
}