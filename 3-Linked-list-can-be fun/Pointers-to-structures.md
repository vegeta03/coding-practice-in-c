# Pointers to Structures

- Pointers work with primitive types in C, they also work with structures or user-defined types.
- Structures in C are made up of different elements, they are laid out in memory one element after another.
- The pointer points to the very first element in a structure pointer arithmetic works exactly like with ints, chars etc, C knows the size of structs.

```C
struct SomeData {
    int value;
    char ch;
    bool is_valid;
}

struct SomeData some_data;
some_data.value = 2;
some_data.ch = 'a';
some_data.is_valid = true;

struct SomeData *struct_ptr = &some_data;

struct_ptr -> value = 5;
```