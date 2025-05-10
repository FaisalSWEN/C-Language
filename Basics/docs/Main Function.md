# The `main` Function in C

The `main` function is the entry point of every C program. It is where the program starts executing. Without a `main` function, the program cannot run.

## Purpose of the `main` Function

- It serves as the starting point for program execution.
- It coordinates the execution of other functions in the program.
- It returns a value to the operating system to indicate the program's success or failure.

## Return Type of `main`

- The return type of the `main` function is `int` (integer).
- This return type is used to communicate the program's exit status to the operating system.
  - `0` typically indicates successful execution.
  - Non-zero values indicate errors or abnormal termination.

## Syntax of `main`

```c
int main() {
    // Program code
    return 0;
}
```

## What to Return

- **`return 0;`**: Indicates that the program executed successfully.
- **`return 1;` or other non-zero values**: Indicates an error or abnormal termination.

## Example

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n"); // Print a message to the console
    return 0; // Indicate successful execution
}
```

## Key Points

- The `main` function can also take arguments (`int argc, char *argv[]`) to handle command-line inputs.
- The `return` statement is optional in some environments, but it is good practice to include it for clarity and portability.

By understanding the `main` function, you can structure your C programs effectively and ensure proper communication with the operating system.
