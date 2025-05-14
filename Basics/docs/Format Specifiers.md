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

## Format Specifier Modifiers

Format specifiers can include optional modifiers that control the width, precision, alignment, and other aspects of how data is displayed.

### Width and Precision

- **Width**: Specifies the minimum number of characters to be output.
- **Precision**: Specifies the number of decimal places for floating-point numbers or the maximum number of characters for strings.

```c
#include <stdio.h>

int main() {
    float num = 3.14159;
    printf("Right-aligned, width 10: '%10f'\n", num);     // Width of 10
    printf("Precision 2 decimal places: '%.2f'\n", num);  // 2 decimal places
    printf("Width 10, precision 2: '%10.2f'\n", num);     // Combined

    char str[] = "Hello";
    printf("String, max 3 chars: '%.3s'\n", str);         // Max 3 characters
    return 0;
}
```

Output:

```
Right-aligned, width 10: '  3.141590'
Precision 2 decimal places: '3.14'
Width 10, precision 2: '      3.14'
String, max 3 chars: 'Hel'
```

### Flags

- **`-`**: Left-align the output within the specified width.
- **`+`**: Always include a sign (+ or -) for numeric values.
- **`0`**: Pad with leading zeros instead of spaces.
- **`#`**: Alternate form (e.g., adds '0x' prefix for hexadecimal).
- **` `**: (space) Leaves a space before positive numbers.

```c
#include <stdio.h>

int main() {
    int num = 42;
    int negative = -42;

    printf("Left-aligned, width 5: '%-5d'\n", num);         // Left-aligned
    printf("Sign shown: '%+d' and '%+d'\n", num, negative); // Show sign
    printf("Zero-padded, width 5: '%05d'\n", num);          // Zero padding
    printf("Alternate form (hex): '%#x'\n", num);           // Alternate form
    printf("Space for positive: '% d' and '% d'\n", num, negative); // Space

    return 0;
}
```

Output:

```
Left-aligned, width 5: '42   '
Sign shown: '+42' and '-42'
Zero-padded, width 5: '00042'
Alternate form (hex): '0x2a'
Space for positive: ' 42' and '-42'
```

### Length Modifiers

Length modifiers specify the size of the argument:

- **`h`**: Used with integers to indicate `short int` or `unsigned short int`.
- **`l`**: Used with integers for `long int` or with floating-point for `double`.
- **`ll`**: Used with integers to indicate `long long int`.
- **`L`**: Used with floating-point for `long double`.

```c
#include <stdio.h>

int main() {
    short s = 32767;
    long l = 2147483647L;
    long long ll = 9223372036854775807LL;

    printf("Short: '%hd'\n", s);
    printf("Long: '%ld'\n", l);
    printf("Long Long: '%lld'\n", ll);

    return 0;
}
```

### Format Modifiers in `scanf`

Format modifiers are also used with `scanf`:

```c
#include <stdio.h>

int main() {
    int width;
    float value;

    // Read an integer with maximum width of 2 digits
    printf("Enter a number (max 2 digits): ");
    scanf("%2d", &width);

    // Read a float with exactly 4 decimal places
    printf("Enter a float with format XX.XXXX: ");
    scanf("%f", &value);

    printf("You entered: %d and %f\n", width, value);
    return 0;
}
```

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
