# Basics of Data Types in C

C provides several data types to handle different kinds of data. These are broadly categorized into:

## Schedule: Basics of Data Types

| Topic              | Description                                           |
| ------------------ | ----------------------------------------------------- |
| Basic Data Types   | Integer, floating-point, character, and boolean types |
| Type Modifiers     | Signed, unsigned, and const modifiers                 |
| Derived Data Types | Arrays, pointers, structures, and unions              |
| Enumerated Types   | Enums for named integer constants                     |

## Examples of Data Types in C

| Data Type            | Example Code                         |
| -------------------- | ------------------------------------ |
| Integer Types        | `int age = 25;`                      |
| Floating-Point Types | `float pi = 3.14; double e = 2.718;` |
| Character Type       | `char grade = 'A';`                  |
| Boolean Type         | `_Bool isPassed = 1;`                |
| Signed Modifier      | `signed int temperature = -20;`      |
| Unsigned Modifier    | `unsigned int count = 100;`          |
| Arrays               | `int numbers[5] = {1, 2, 3, 4, 5};`  |
| Pointers             | `int *ptr = &age;`                   |
| Structures           | `struct Point { int x; int y; };`    |
| Unions               | `union Data { int i; float f; };`    |
| Enumerated Types     | `enum Color { RED, GREEN, BLUE };`   |

## Size of Each Data Type in C

| Data Type      | Size (in bytes)                       | Example Code                           |
| -------------- | ------------------------------------- | -------------------------------------- |
| `int`          | Typically 4 bytes                     | `printf("%zu", sizeof(int));`          |
| `float`        | Typically 4 bytes                     | `printf("%zu", sizeof(float));`        |
| `double`       | Typically 8 bytes                     | `printf("%zu", sizeof(double));`       |
| `char`         | Typically 1 byte                      | `printf("%zu", sizeof(char));`         |
| `short`        | Typically 2 bytes                     | `printf("%zu", sizeof(short));`        |
| `long`         | Typically 8 bytes (on 64-bit systems) | `printf("%zu", sizeof(long));`         |
| `long double`  | Typically 16 bytes                    | `printf("%zu", sizeof(long double));`  |
| `unsigned int` | Same as `int`                         | `printf("%zu", sizeof(unsigned int));` |

Note: The size of data types may vary depending on the system architecture and compiler.

Understanding these data types is essential for writing efficient and error-free C programs.

## Arrays in C

Arrays in C are a collection of elements of the same data type stored in contiguous memory locations. They are used to store multiple values in a single variable, making it easier to manage and manipulate data.

### Key Features of Arrays

- All elements in an array must be of the same data type.
- Arrays are zero-indexed, meaning the first element is accessed with index `0`.
- The size of an array must be specified at the time of declaration.

### Syntax

```c
<datatype> arrayName[size];
```

### Example: Declaring and Using Arrays

```c
#include <stdio.h>

int main() {
    // Declare and initialize an array
    int numbers[5] = {1, 2, 3, 4, 5};

    // Access and print array elements
    printf("First element: %d\n", numbers[0]);
    printf("Second element: %d\n", numbers[1]);

    // Modify an array element
    numbers[2] = 10;
    printf("Modified third element: %d\n", numbers[2]);

    // Loop through the array
    printf("All elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
```

### Output

```
First element: 1
Second element: 2
Modified third element: 10
All elements: 1 2 10 4 5
```

### Multidimensional Arrays

C also supports multidimensional arrays, such as 2D arrays, which are often used to represent matrices.

#### Example: 2D Array

```c
#include <stdio.h>

int main() {
    // Declare and initialize a 2D array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Access and print elements of the 2D array
    printf("Element at [0][0]: %d\n", matrix[0][0]);
    printf("Element at [1][2]: %d\n", matrix[1][2]);

    return 0;
}
```

### Output

```
Element at [0][0]: 1
Element at [1][2]: 6
```

Arrays are a fundamental concept in C programming, providing a way to efficiently store and manipulate collections of data.

## Pointers in C

Pointers in C are variables that store the memory address of another variable. They are a powerful feature of the language, allowing for efficient memory management and manipulation.

### Key Features of Pointers

- A pointer stores the address of a variable.
- The `*` operator is used to declare a pointer and dereference it.
- The `&` operator is used to get the address of a variable.

### Syntax

```c
<datatype> *pointerName;
```

### Example: Declaring and Using Pointers

```c
#include <stdio.h>

int main() {
    int num = 10; // Declare an integer variable
    int *ptr = &num; // Declare a pointer and store the address of 'num'

    // Access the value and address using the pointer
    printf("Value of num: %d\n", *ptr); // Dereference the pointer
    printf("Address of num: %p\n", ptr); // Print the address stored in the pointer

    // Modify the value of 'num' using the pointer
    *ptr = 20;
    printf("Modified value of num: %d\n", num);

    return 0;
}
```

### Output

```
Value of num: 10
Address of num: 0x7ffee3b2c8
Modified value of num: 20
```

### Pointer Arithmetic

Pointers can be incremented or decremented to traverse memory locations.

#### Example: Pointer Arithmetic

```c
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr; // Pointer to the first element of the array

    // Access array elements using the pointer
    for (int i = 0; i < 3; i++) {
        printf("Value at arr[%d]: %d\n", i, *(ptr + i));
    }

    return 0;
}
```

### Output

```
Value at arr[0]: 10
Value at arr[1]: 20
Value at arr[2]: 30
```

Pointers are a fundamental concept in C programming, enabling dynamic memory allocation, efficient array handling, and interaction with hardware.
