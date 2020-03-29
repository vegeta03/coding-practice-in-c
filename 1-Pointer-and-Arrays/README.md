# Pointer and Arrays

## Pointers

- They are the foundation around which hard programming problems are built - they force conceptualization of memory layout and allocation which are useful for everyhting we build on top.

### How is memory laid out for a program

- Memory is divided into blocks of a certian size(32-bits or 64-bits depending on your OS).
- Each block has a specified address - This means every location in memory can be accessed by using its address.
- Addresses are represented in hexadecimal.
- Thats pretty painful which is why we do not deal with addresses, instead have variables which symbolically represent a block in memory.

### How is this information stored in memory

- `int radius = 25;`
- radius: Symbolically refers to a location in memory.
- 25: is the value stored in that location, it lives in that memory space reffered to by "radius".
- int: is the data-type if the data stored. It tells the compiler how to read the data stored in that particular memory location.
- The location has an underlying address that is known by your C program, We simply refer to it as "radius".

### What is a Pointer

- A pointer is a special variable. Regular variables store integers, floats, characters etc... in C. A pointer however stores _an address_ in memory.
- We can say that a pointer "points to" an address in memory.

### How do we set up `radiusPtr` to point to `radius`

- `int *radiusPtr = &radius;`
- `int *` means: A pointer to an integer. `int` is the data-type and `*` means it is a pointer.
- `&` before a variable means we need the address of the variable. Thats how we access the address of `radius`.

### What types do pointer variables have

- Pointers can point to any type of variable. integer, char, boolean, float etc
- The types of pointers depend on what pointers point to:

  - pointer to integer(int\* intptr)
  - pointer to char(char\* charptr)
  - pointer to float(float\* floatptr)

### If the pointer is just an address why does it need a type

### Arent all addresses the same type, just addresses

### How much space does stuff occupy

- Different types of variables occupy different amounts of space:
  - integer: 4bytes
  - float: 4bytes
  - char: 1byte
- Pointers need to know what type they point to so we can do something interesting called _pointer arithmetic_.
- Every data-type available in C, can have a corresponding pointer type which points to the address which holds a value of that data type.
- `int radius = 25;` initialized a integer variable radius with value 25.
- `int *radiusPtr = &radius;` initialized a pointer variable radiusPtr with address of variable radius.
- `int *otherRadiusPtr;` declared a pointer variable otherRadiusPtr of data-type `int`.
- `otherRadiusPtr = radiusPtr;` assisgned otherRadiusPtr pointer variable with value(address value) of radiusPtr.
- Now both `radiusPtr` and `otherRadiusPtr` pointer variables points to same memory location i.e. contains same address(address of variable `radius`). But both `radiusPtr` and `otherRadiusPtr` pointer variables have its own memory locations.
- `int r = *radiusPtr;`
- `*radiusPtr` access the value pointed to by the pointer i.e. access 25.
- The variable `r` is a new variable in a new memory location holding the value 25 that is assigned to it.

## Pointer problem and Arrays

- Arrays in C are actually pointers.
- `int arr[4] = {1, 2, 3, 4};`
- The way to access individual elements in the array is via indexes: `arr[0]`....`arr[3]`.
- Array elements are stored in contiguous memory location.
- Array variables are simply pointers.
- `arr` is a pointer to an integer and it points to the address location of the very first element in the integer array.
- The type of array variable `arr` is `int*`.
- `int *intptr = arr;`
- Let say we perform the increment operation on the variable intptr i.e. we call `intptr++;`

### What does `intptr++;` do

- This performs *pointer arithmetic*.
- Moves the pointer to the next position in the array i.e. it points to `arr[1]`.
- If you know:
  - The address of the very first element of the array.
  - How much space each element occupies(i.e. data-type of element).
- You can can calculate the address of the remaining elements of the array.
- We can do `*(arr + 1)` to access the second index value and so on.
  
### String in C.

- A string in C is just a `char*` - An array of characters.
- `char* str = "Hello World.";`
- In memory a string looks like a char array terminated by `'\0'`.
- `printf("%s", str);` this prints a string to screen.
- `*str` access the first element of a string which is the character "H" in the example.
- Successive elements can be accessed using `*(str + 1)`, `*(str + 2)` etc, They can also be accessed using `str[1]`, `str[2]` etc.