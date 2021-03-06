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

### `char* strchr(const char* str, int c)`

- A function to check for a character in a string.
- This returns a pointer to where the character c is present in the string `str`.
- Characters are integers at heart, `int c` is just the ASCII code for the character and can be tested for equality with characters.
- The functions should handle `NULL`s and return `NULL` if the character is not found in the string.

## Pointer as arguments to functions

- Changes within a function may or may not reflect in the calling code. It depends on what the change is.
- There are 2 operations that you can do on pointers in a function:
  - modification of the pointer value.
    - reflects in the calling code.
  - reassignment oa pointer.
    - does not reflect in the calling code.