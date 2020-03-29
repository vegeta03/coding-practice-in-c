# Working with _strings_

## string.h is a C library

- which has many functions to work with strings in C.
- There are helper methods to deal with getting the length of a string, concatenating 2 strings, copy from one string to another etc.

### `size_t strlen(const char* str)`

- A function to find the length of a given string.

- `size_t`

  - is an unsigned integral type.
  - The length of a string cannot be negative.

- `const char*`
  - This indicates that the pointer is to a constant `char` which means the string it is pointing to cannot be changed. Operations such as `str[0]="P";` is not valid.
