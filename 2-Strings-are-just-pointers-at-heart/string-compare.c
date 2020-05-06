#include <stdio.h>

int my_strcmp(const char* str1, const char* str2) {
    if(str1 == NULL && str2 == NULL) {
        return 0;
    }

    if(str1 == NULL) {
        return -1;
    }

    if(str2 == NULL) {
        return 1;
    }

    const char* ch1 = str1;
    const char* ch2 = str2;

    while(*ch1 != '\0' && *ch2 != '\0') {
        if(*ch1 != *ch2) {
            return *ch1 - *ch2;
        }

        ch1++;
        ch2++;
    }

    if(*ch1 == '\0' && *ch2 != '\0') {
        return -1;
    }

    if(*ch1 != '\0' && *ch2 == '\0') {
        return 1;
    }

    return 0;

}