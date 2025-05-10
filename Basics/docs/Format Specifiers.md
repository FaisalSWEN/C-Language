# Format Specifiers in C

Format specifiers in C are used in input and output functions (like `printf` and `scanf`) to specify the type of data being handled. They act as placeholders for variables in formatted strings.

## Commonly Used Format Specifiers

### 1. Integer (`%d` or `%i`)

- **Purpose**: Used for signed integers.
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      int num = 42;
      printf("The number is: %d\n", num);
      return 0;
  }
  ```

### 2. Unsigned Integer (`%u`)

- **Purpose**: Used for unsigned integers.
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      unsigned int num = 42;
      printf("The unsigned number is: %u\n", num);
      return 0;
  }
  ```

### 3. Floating-Point (`%f`)

- **Purpose**: Used for floating-point numbers.
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      float pi = 3.14159;
      printf("The value of PI is: %.2f\n", pi);
      return 0;
  }
  ```

### 4. Double (`%lf`)

- **Purpose**: Used for double-precision floating-point numbers.
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      double e = 2.718281828;
      printf("The value of e is: %.5lf\n", e);
      return 0;
  }
  ```

### 5. Character (`%c`)

- **Purpose**: Used for single characters.
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      char grade = 'A';
      printf("Your grade is: %c\n", grade);
      return 0;
  }
  ```

### 6. String (`%s`)

- **Purpose**: Used for strings.
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      char name[] = "Faisal";
      printf("Hello, %s!\n", name);
      return 0;
  }
  ```

### 7. Hexadecimal (`%x` or `%X`)

- **Purpose**: Used for hexadecimal representation of integers.
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      int num = 255;
      printf("The number in hexadecimal is: %x\n", num);
      return 0;
  }
  ```

### 8. Octal (`%o`)

- **Purpose**: Used for octal representation of integers.
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      int num = 255;
      printf("The number in octal is: %o\n", num);
      return 0;
  }
  ```

### 9. Pointer Address (`%p`)

- **Purpose**: Used to print memory addresses.
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      int num = 42;
      printf("The memory address of num is: %p\n", (void*)&num);
      return 0;
  }
  ```

## `%zu` Format Specifier

The `%zu` format specifier is used to print the size of objects in bytes, as returned by the `sizeof` operator. It is specifically designed for `size_t`, which is an unsigned integer type used to represent sizes.

### Example: Using `%zu` with `sizeof`

```c
#include <stdio.h>

int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));
    return 0;
}
```

### Output

```
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of char: 1 byte
```

The `%zu` specifier ensures portability and correctness when working with `size_t` values, making it the preferred choice for printing sizes in C.

## Key Points

- Format specifiers are essential for handling different data types in formatted input/output.
- Always ensure the format specifier matches the variable type to avoid undefined behavior.

By mastering format specifiers, you can effectively manage input and output operations in your C programs.

## Summary Schedule of Format Specifiers

| Format Specifier | Purpose                             | Example Code                  | Output           |
| ---------------- | ----------------------------------- | ----------------------------- | ---------------- |
| `%d` or `%i`     | Used for signed integers            | `printf("%d", 42);`           | 42               |
| `%u`             | Used for unsigned integers          | `printf("%u", 42);`           | 42               |
| `%f`             | Used for floating-point numbers     | `printf("%.2f", 3.14159);`    | 3.14             |
| `%lf`            | Used for double-precision floats    | `printf("%.5lf", 2.71828);`   | 2.71828          |
| `%c`             | Used for single characters          | `printf("%c", 'A');`          | A                |
| `%s`             | Used for strings                    | `printf("%s", "Hello");`      | Hello            |
| `%x` or `%X`     | Used for hexadecimal representation | `printf("%x", 255);`          | ff               |
| `%o`             | Used for octal representation       | `printf("%o", 255);`          | 377              |
| `%p`             | Used to print memory addresses      | `printf("%p", (void*)&num);`  | (Memory address) |
| `%zu`            | Used to print size of objects       | `printf("%zu", sizeof(int));` | 4 bytes          |

This table provides a quick reference for the most commonly used format specifiers in C, their purposes, example code, and output.
