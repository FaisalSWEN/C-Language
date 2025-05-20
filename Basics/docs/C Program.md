# C Program Structure

A C program consists of various elements that work together to create a functional application. This document covers two essential components of any C program: preprocessor directives and the main function.

## Preprocessor Directives

Preprocessor directives in C are instructions that are processed by the preprocessor before the actual compilation of the code begins. These directives are used to include files, define constants, conditionally compile code, and more. They always begin with a `#` symbol.

### Common Preprocessor Directives

#### 1. `#include`

The `#include` directive is used to include the contents of a file into the program. It is commonly used to include header files.

- **Syntax**:

  ```c
  #include <header_file>
  #include "custom_file.h"
  ```

- **Example**:
  ```c
  #include <stdio.h>
  #include "my_header.h"
  ```

#### 2. `#define`

The `#define` directive is used to define constants or macros.

- **Syntax**:

  ```c
  #define NAME value
  ```

- **Example**:
  ```c
  #define PI 3.14159
  #define SQUARE(x) ((x) * (x))
  ```

#### 3. `#undef`

The `#undef` directive is used to undefine a macro that was previously defined.

- **Syntax**:

  ```c
  #undef NAME
  ```

- **Example**:
  ```c
  #undef PI
  ```

#### 4. Conditional Compilation

Conditional compilation directives allow parts of the code to be compiled or ignored based on certain conditions.

- **Directives**:

  - `#ifdef` / `#ifndef`
  - `#if` / `#elif` / `#else` / `#endif`

- **Example**:
  ```c
  #ifdef DEBUG
  printf("Debug mode is enabled.\n");
  #endif
  ```

#### 5. `#pragma`

The `#pragma` directive is used to provide special instructions to the compiler.

- **Example**:
  ```c
  #pragma once
  ```

### How Preprocessor Directives Work

The preprocessor scans the source code for directives and processes them before the compiler translates the code into machine language. This allows for modularity, code reuse, and conditional compilation.

## The `main` Function

The `main` function is the entry point of every C program. It is where the program starts executing. Without a `main` function, the program cannot run.

### Purpose of the `main` Function

- It serves as the starting point for program execution.
- It coordinates the execution of other functions in the program.
- It returns a value to the operating system to indicate the program's success or failure.

### Return Type of `main`

- The return type of the `main` function is `int` (integer).
- This return type is used to communicate the program's exit status to the operating system.
  - `0` typically indicates successful execution.
  - Non-zero values indicate errors or abnormal termination.

### Syntax of `main`

```c
int main() {
    // Program code
    return 0;
}
```

### What to Return

- **`return 0;`**: Indicates that the program executed successfully.
- **`return 1;` or other non-zero values**: Indicates an error or abnormal termination.

### Command Line Arguments

The `main` function can also take arguments to handle command-line inputs:

```c
int main(int argc, char *argv[]) {
    // argc: argument count
    // argv: argument vector (array of strings)
    printf("Program name: %s\n", argv[0]);
    return 0;
}
```

## Putting It All Together

A complete C program typically includes preprocessor directives followed by the main function:

```c
// Preprocessor directives
#include <stdio.h>
#define MAX_SIZE 100

// Main function
int main() {
    printf("Hello, World!\n");
    printf("Maximum size is: %d\n", MAX_SIZE);
    return 0;
}
```

## Key Points

- Preprocessor directives do not end with a semicolon (`;`).
- The `return` statement in the `main` function is optional in some environments, but it is good practice to include it for clarity and portability.
- The proper structure of a C program is essential for efficient and maintainable code.

By understanding preprocessor directives and the `main` function, you can structure your C programs effectively and ensure proper communication with the operating system.
