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

## Signed vs Unsigned Data Types

In C, integer types can be modified with `signed` or `unsigned` keywords to specify whether the type can represent negative values or not.

### Signed Data Types

- **Description**: Can represent both positive and negative values.
- **Default**: Integer types are signed by default if not specified otherwise.
- **Range**: For an n-bit signed integer, the range is typically -2^(n-1) to 2^(n-1)-1.

```c
#include <stdio.h>

int main() {
    signed int num = -50;
    int another_num = -100; // 'signed' is implicit

    printf("Signed int value: %d\n", num);
    printf("Another signed int: %d\n", another_num);

    // Range of signed char
    signed char min_char = -128;
    signed char max_char = 127;
    printf("Range of signed char: %d to %d\n", min_char, max_char);

    return 0;
}
```

### Unsigned Data Types

- **Description**: Can only represent non-negative values (zero and positive).
- **Advantage**: Provides a larger positive range for the same number of bits.
- **Range**: For an n-bit unsigned integer, the range is typically 0 to 2^n-1.

```c
#include <stdio.h>

int main() {
    unsigned int count = 50000;
    unsigned char byte = 255; // Maximum value for 8-bit unsigned char

    printf("Unsigned int value: %u\n", count);
    printf("Unsigned char value: %u\n", byte);

    // Range of unsigned int (demonstration on a 32-bit system)
    printf("Maximum unsigned int value: %u\n", 4294967295u);

    // This will wrap around due to overflow
    unsigned char overflow = 256; // 256 is out of range for unsigned char
    printf("Overflow demonstration: %u\n", overflow); // Will print 0

    return 0;
}
```

### Comparison of Ranges

| Data Type                | Size (typical) | Range                                                   |
| ------------------------ | -------------- | ------------------------------------------------------- |
| `signed char`            | 1 byte         | -128 to 127                                             |
| `unsigned char`          | 1 byte         | 0 to 255                                                |
| `signed short`           | 2 bytes        | -32,768 to 32,767                                       |
| `unsigned short`         | 2 bytes        | 0 to 65,535                                             |
| `signed int`             | 4 bytes        | -2,147,483,648 to 2,147,483,647                         |
| `unsigned int`           | 4 bytes        | 0 to 4,294,967,295                                      |
| `signed long` (64-bit)   | 8 bytes        | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| `unsigned long` (64-bit) | 8 bytes        | 0 to 18,446,744,073,709,551,615                         |

### When to Use Unsigned Types

- **Counting and array indices**: When you know a value will never be negative.
- **Bitwise operations**: When working with individual bits or flags.
- **Memory sizes**: When representing sizes of memory or objects.
- **Protocols and file formats**: When implementing specific protocols or file formats that require unsigned values.

### When to Use Signed Types

- **General purpose calculations**: When values might be positive or negative.
- **Mathematical operations**: When subtraction might result in negative values.
- **Temperature, coordinates**: When representing values that can be below zero.

### Example: Overflow Behavior

```c
#include <stdio.h>

int main() {
    signed char s_char = 127;
    unsigned char u_char = 255;

    printf("Before increment - signed: %d, unsigned: %u\n", s_char, u_char);

    // Increment both variables
    s_char++;
    u_char++;

    printf("After increment - signed: %d, unsigned: %u\n", s_char, u_char);

    return 0;
}
```

Output:

```
Before increment - signed: 127, unsigned: 255
After increment - signed: -128, unsigned: 0
```

This example demonstrates overflow behavior. When `signed char` exceeds its maximum value (127), it wraps around to its minimum value (-128). Similarly, when `unsigned char` exceeds its maximum value (255), it wraps around to 0.

Understanding the differences between signed and unsigned types is crucial for writing correct and efficient C programs, especially when dealing with numerical calculations or memory management.

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

## Structures in C

Structures in C are user-defined data types that allow grouping of variables of different data types under a single name. They are essential for organizing related data together.

### Key Features of Structures

- A structure can contain members of different data types.
- Members of a structure are accessed using the dot (`.`) operator.
- Pointers to structures use the arrow (`->`) operator to access members.
- Structures can be nested (a structure can contain another structure as a member).

### Syntax

```c
struct structure_name {
    data_type member1;
    data_type member2;
    // ...more members
};
```

### Example: Declaring and Using Structures

```c
#include <stdio.h>
#include <string.h>

// Define a structure for a student
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    // Declare a structure variable
    struct Student student1;

    // Initialize structure members
    strcpy(student1.name, "John Doe");
    student1.roll_number = 101;
    student1.marks = 85.5;

    // Access and print structure members
    printf("Student Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.roll_number);
    printf("Marks: %.1f\n", student1.marks);

    // Initialize structure at declaration
    struct Student student2 = {"Jane Smith", 102, 92.0};
    printf("\nStudent2 Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.roll_number);
    printf("Marks: %.1f\n", student2.marks);

    return 0;
}
```

### Output

```
Student Name: John Doe
Roll Number: 101
Marks: 85.5

Student2 Name: Jane Smith
Roll Number: 102
Marks: 92.0
```

### Arrays of Structures

You can create arrays of structures to store multiple records of the same type.

```c
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    // Array of 3 Point structures
    struct Point points[3] = {{1, 2}, {3, 4}, {5, 6}};

    // Access and print array elements
    for (int i = 0; i < 3; i++) {
        printf("Point %d: (%d, %d)\n", i+1, points[i].x, points[i].y);
    }

    return 0;
}
```

### Output

```
Point 1: (1, 2)
Point 2: (3, 4)
Point 3: (5, 6)
```

### Structures and Pointers

Pointers to structures are commonly used for efficient memory management and function parameters.

```c
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

// Function that takes a pointer to a structure
void giveSalaryHike(struct Employee *emp, float percentage) {
    emp->salary += (emp->salary * percentage / 100);
}

int main() {
    struct Employee emp1 = {"Alice Johnson", 1001, 50000.0};
    struct Employee *empPtr = &emp1;

    // Access structure members using pointer
    printf("Before hike - Name: %s, ID: %d, Salary: %.2f\n",
           empPtr->name, empPtr->id, empPtr->salary);

    // Give 10% salary hike
    giveSalaryHike(empPtr, 10.0);

    printf("After hike - Name: %s, ID: %d, Salary: %.2f\n",
           emp1.name, emp1.id, emp1.salary);

    return 0;
}
```

### Output

```
Before hike - Name: Alice Johnson, ID: 1001, Salary: 50000.00
After hike - Name: Alice Johnson, ID: 1001, Salary: 55000.00
```

### Nested Structures

Structures can contain other structures as members, allowing for complex data organization.

```c
#include <stdio.h>

// Address structure
struct Address {
    char street[100];
    char city[50];
    char state[20];
    int zipcode;
};

// Person structure with nested Address structure
struct Person {
    char name[50];
    int age;
    struct Address address; // Nested structure
};

int main() {
    // Initialize nested structure
    struct Person person = {
        "Bob Wilson",
        30,
        {"123 Main St", "Anytown", "State", 12345}
    };

    // Access and print nested structure members
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Address: %s, %s, %s, %d\n",
           person.address.street,
           person.address.city,
           person.address.state,
           person.address.zipcode);

    return 0;
}
```

### Output

```
Name: Bob Wilson
Age: 30
Address: 123 Main St, Anytown, State, 12345
```

### Structures with typedef

The `typedef` keyword can be used to create an alias for structure types, making them easier to use.

```c
#include <stdio.h>

// Define a structure with typedef
typedef struct {
    int x;
    int y;
} Point;

int main() {
    // No need to use 'struct' keyword with typedef
    Point p1 = {10, 20};

    printf("Point coordinates: (%d, %d)\n", p1.x, p1.y);

    return 0;
}
```

### Output

```
Point coordinates: (10, 20)
```

Structures are one of the most powerful features in C for organizing complex data, enabling the creation of custom data types that can model real-world entities and relationships.
