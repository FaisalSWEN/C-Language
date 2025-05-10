# Preprocessor Directives in C

Preprocessor directives in C are instructions that are processed by the preprocessor before the actual compilation of the code begins. These directives are used to include files, define constants, conditionally compile code, and more. They always begin with a `#` symbol.

## Common Preprocessor Directives

### 1. `#include`

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

### 2. `#define`

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

### 3. `#undef`

The `#undef` directive is used to undefine a macro that was previously defined.

- **Syntax**:

  ```c
  #undef NAME
  ```

- **Example**:
  ```c
  #undef PI
  ```

### 4. Conditional Compilation

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

### 5. `#pragma`

The `#pragma` directive is used to provide special instructions to the compiler.

- **Example**:
  ```c
  #pragma once
  ```

## How Preprocessor Directives Work

The preprocessor scans the source code for directives and processes them before the compiler translates the code into machine language. This allows for modularity, code reuse, and conditional compilation.

## Key Points

- Preprocessor directives do not end with a semicolon (`;`).
- They are executed before the compilation phase.
- They make the code more flexible and easier to maintain.

---

Preprocessor directives are a powerful feature of C that allow developers to write efficient and modular code. Understanding and using them effectively is an essential step in mastering the C language.
