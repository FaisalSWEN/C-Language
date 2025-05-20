# Control Structures in C

Control structures in C are programming constructs that allow you to control the flow of execution in your program. They determine which blocks of code execute, when they execute, and how many times they execute.

## Types of Control Structures

C provides three main types of control structures:

1. Sequence structures (default flow)
2. Selection structures (decision-making)
3. Repetition structures (loops)

## 1. Selection Structures (Decision-Making)

Selection structures allow a program to make decisions based on certain conditions. C provides several decision-making structures:

### if Statement

The `if` statement executes a block of code if a specified condition is true.

```c
#include <stdio.h>

int main() {
    int age = 20;

    if (age >= 18) {
        printf("You are an adult.\n");
    }

    return 0;
}
```

### if-else Statement

The `if-else` statement executes one block of code if a condition is true and another if it's false.

```c
#include <stdio.h>

int main() {
    int number = 15;

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
```

### if-else if-else Ladder

This structure tests multiple conditions and executes the block associated with the first true condition.

```c
#include <stdio.h>

int main() {
    int score = 85;

    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
```

### Nested if Statements

An `if` statement can contain another `if` statement inside it.

```c
#include <stdio.h>

int main() {
    int age = 25;
    int hasLicense = 1; // 1 for true, 0 for false

    if (age >= 18) {
        printf("Age requirement met.\n");

        if (hasLicense) {
            printf("You can drive.\n");
        } else {
            printf("You need a license to drive.\n");
        }
    } else {
        printf("You must be 18 or older to drive.\n");
    }

    return 0;
}
```

### switch Statement

The `switch` statement selects one of many code blocks to execute based on the value of an expression.

```c
#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}
```

### Ternary Operator

The ternary operator (`? :`) is a shorthand for the `if-else` statement.

```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int max;

    // Using ternary operator
    max = (a > b) ? a : b;

    printf("Maximum value: %d\n", max);

    return 0;
}
```

## 2. Repetition Structures (Loops)

Loops allow you to execute a block of code repeatedly.

### for Loop

The `for` loop repeats a block of code a specified number of times.

```c
#include <stdio.h>

int main() {
    // Print numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
```

### while Loop

The `while` loop repeats a block of code while a specified condition is true.

```c
#include <stdio.h>

int main() {
    int i = 1;

    // Print numbers from 1 to 5
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;
}
```

### do-while Loop

The `do-while` loop is similar to the `while` loop, but it executes the block at least once before checking the condition.

```c
#include <stdio.h>

int main() {
    int i = 1;

    // Print numbers from 1 to 5
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");

    return 0;
}
```

### Nested Loops

Loops can be nested inside other loops.

```c
#include <stdio.h>

int main() {
    // Print a pattern
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
```

Output:

```
*
* *
* * *
```

## 3. Jump Statements

Jump statements alter the flow of control.

### break Statement

The `break` statement terminates the loop or switch statement.

```c
#include <stdio.h>

int main() {
    // Print numbers from 1 to 10, but stop at 5
    for (int i = 1; i <= 10; i++) {
        if (i > 5) {
            break; // Exit the loop
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
```

Output:

```
1 2 3 4 5
```

### continue Statement

The `continue` statement skips the current iteration of a loop and continues with the next iteration.

```c
#include <stdio.h>

int main() {
    // Print odd numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
```

Output:

```
1 3 5 7 9
```

### goto Statement

The `goto` statement transfers control to a labeled statement within the same function. Note: It's generally discouraged due to the potential for creating spaghetti code.

```c
#include <stdio.h>

int main() {
    int i = 1;

start:
    if (i <= 5) {
        printf("%d ", i);
        i++;
        goto start;
    }
    printf("\n");

    return 0;
}
```

Output:

```
1 2 3 4 5
```

### return Statement

The `return` statement exits from a function and optionally returns a value.

```c
#include <stdio.h>

// Function to check if a number is even
int isEven(int num) {
    if (num % 2 == 0) {
        return 1; // True
    }
    return 0; // False
}

int main() {
    int number = 6;

    if (isEven(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
```

## Best Practices for Control Structures

1. **Clarity**: Write clear conditions that are easy to understand.
2. **Indentation**: Use consistent indentation to make the code structure visible.
3. **Braces**: Always use braces `{}` for code blocks, even for single statements.
4. **Avoid deep nesting**: Excessive nesting makes code hard to read and maintain.
5. **Prefer for loops**: Use `for` loops when the number of iterations is known in advance.
6. **Prefer while loops**: Use `while` loops when the loop should continue until a condition is met.
7. **Avoid goto**: The `goto` statement can make code hard to follow and maintain.

## Summary

Control structures are fundamental to programming as they allow you to implement algorithms by controlling the flow of execution. C provides a comprehensive set of control structures:

- Decision-making structures (`if`, `if-else`, `switch`)
- Loop structures (`for`, `while`, `do-while`)
- Jump statements (`break`, `continue`, `return`, `goto`)

By mastering these control structures, you can write efficient and effective C programs to solve complex problems.
