# Strings in C and the `string.h` Library

Strings in C are arrays of characters terminated by a null character (`\0`). They are used to store and manipulate text. The `string.h` library provides a set of functions to perform various operations on strings, such as copying, concatenation, comparison, and more.

## Declaring and Initializing Strings

### Example: Declaring a String

```c
#include <stdio.h>

int main() {
    char name[20] = "Faisal"; // Declare and initialize a string
    printf("Hello, %s!\n", name);
    return 0;
}
```

### Output

```
Hello, Faisal!
```

## Commonly Used Functions in `string.h`

### 1. `strlen`

- **Purpose**: Returns the length of a string (excluding the null character).
- **Syntax**:
  ```c
  size_t strlen(const char *str);
  ```
- **Example**:

  ```c
  #include <stdio.h>
  #include <string.h>

  int main() {
      char str[] = "Hello";
      printf("Length of the string: %zu\n", strlen(str));
      return 0;
  }
  ```

- **Output**:
  ```
  Length of the string: 5
  ```

### 2. `strcpy`

- **Purpose**: Copies one string into another.
- **Syntax**:
  ```c
  char *strcpy(char *dest, const char *src);
  ```
- **Example**:

  ```c
  #include <stdio.h>
  #include <string.h>

  int main() {
      char src[] = "Hello";
      char dest[20];
      strcpy(dest, src);
      printf("Copied string: %s\n", dest);
      return 0;
  }
  ```

- **Output**:
  ```
  Copied string: Hello
  ```

### 3. `strcat`

- **Purpose**: Concatenates (appends) one string to another.
- **Syntax**:
  ```c
  char *strcat(char *dest, const char *src);
  ```
- **Example**:

  ```c
  #include <stdio.h>
  #include <string.h>

  int main() {
      char str1[20] = "Hello";
      char str2[] = " World";
      strcat(str1, str2);
      printf("Concatenated string: %s\n", str1);
      return 0;
  }
  ```

- **Output**:
  ```
  Concatenated string: Hello World
  ```

### 4. `strcmp`

- **Purpose**: Compares two strings lexicographically.
- **Syntax**:
  ```c
  int strcmp(const char *str1, const char *str2);
  ```
- **Example**:

  ```c
  #include <stdio.h>
  #include <string.h>

  int main() {
      char str1[] = "Hello";
      char str2[] = "World";
      int result = strcmp(str1, str2);
      if (result == 0) {
          printf("Strings are equal\n");
      } else if (result < 0) {
          printf("str1 is less than str2\n");
      } else {
          printf("str1 is greater than str2\n");
      }
      return 0;
  }
  ```

- **Output**:
  ```
  str1 is less than str2
  ```

### 5. `strncpy`

- **Purpose**: Copies a specified number of characters from one string to another.
- **Syntax**:
  ```c
  char *strncpy(char *dest, const char *src, size_t n);
  ```
- **Example**:

  ```c
  #include <stdio.h>
  #include <string.h>

  int main() {
      char src[] = "Hello, World!";
      char dest[10];
      strncpy(dest, src, 5);
      dest[5] = '\0'; // Null-terminate the string
      printf("Copied string: %s\n", dest);
      return 0;
  }
  ```

- **Output**:
  ```
  Copied string: Hello
  ```

## Key Points

- Strings in C are null-terminated character arrays.
- The `string.h` library provides a variety of functions to manipulate strings efficiently.
- Always ensure proper memory allocation when working with strings to avoid buffer overflows.

By mastering string handling and the `string.h` library, you can effectively manage text in your C programs.
