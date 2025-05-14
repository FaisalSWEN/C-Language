# Standard I/O Library in C

The Standard Input/Output (I/O) library in C provides functions for performing input and output operations, such as reading from the keyboard, writing to the console, and working with files. These functions are declared in the `<stdio.h>` header file.

## Commonly Used Functions

### 1. `printf`

- **Purpose**: Prints formatted output to the console.
- **Syntax**:
  ```c
  int printf(const char *format, ...);
  ```
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      printf("Hello, World!\n");
      printf("The value of PI is approximately %.2f\n", 3.14159);
      return 0;
  }
  ```

### 2. `scanf`

- **Purpose**: Reads formatted input from the keyboard.
- **Syntax**:
  ```c
  int scanf(const char *format, ...);
  ```
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      int age;
      printf("Enter your age: ");
      scanf("%d", &age);
      printf("You are %d years old.\n", age);
      return 0;
  }
  ```

### 3. `getchar`

- **Purpose**: Reads a single character from the keyboard.
- **Syntax**:
  ```c
  int getchar(void);
  ```
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      char c;
      printf("Enter a character: ");
      c = getchar();
      printf("You entered: %c\n", c);
      return 0;
  }
  ```

### 4. `putchar`

- **Purpose**: Writes a single character to the console.
- **Syntax**:
  ```c
  int putchar(int c);
  ```
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      char c = 'A';
      putchar(c);
      putchar('\n');
      return 0;
  }
  ```

### 5. `fgets`

- **Purpose**: Reads a string from the keyboard.
- **Syntax**:
  ```c
  char *fgets(char *str, int n, FILE *stream);
  ```
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      char name[50];
      printf("Enter your name: ");
      fgets(name, 50, stdin);
      printf("Hello, %s", name);
      return 0;
  }
  ```

### 6. `fputs`

- **Purpose**: Writes a string to the console.
- **Syntax**:
  ```c
  int fputs(const char *str, FILE *stream);
  ```
- **Example**:

  ```c
  #include <stdio.h>

  int main() {
      char message[] = "Hello, World!";
      fputs(message, stdout);
      fputs("\n", stdout);
      return 0;
  }
  ```

### 7. `strcspn` (with stdio.h and string.h)

- **Purpose**: Calculates the length of the initial segment of a string that does not contain any character from another specified string. Commonly used to remove trailing newlines from strings read with `fgets`.
- **Syntax**:
  ```c
  size_t strcspn(const char *str1, const char *str2);
  ```
- **Example**:

  ```c
  #include <stdio.h>
  #include <string.h>

  int main() {
      char name[50];
      printf("Enter your name: ");
      fgets(name, 50, stdin);

      // Remove trailing newline character
      name[strcspn(name, "\n")] = '\0';

      printf("Hello, %s!\n", name);
      return 0;
  }
  ```

- **Explanation**:
  - When `fgets` reads input, it includes the newline character `\n` that was entered when pressing Enter.
  - `strcspn(name, "\n")` finds the position of the newline character in the string.
  - Setting that position to `'\0'` effectively removes the newline by terminating the string at that point.

## Key Points

- The `<stdio.h>` library is essential for basic input and output operations in C.
- Functions like `printf` and `scanf` are widely used for console I/O.
- Functions like `fgets` and `fputs` are safer alternatives for handling strings.

By mastering the Standard I/O library, you can efficiently handle input and output in your C programs.
