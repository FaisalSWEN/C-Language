<!-- filepath: c:\Users\FMA20\Documents\GitHub\C-Language\Basics\docs\operators.md -->

# Operators in C Programming

Operators are symbols that tell the compiler to perform specific mathematical or logical operations. C language is rich in built-in operators and provides the following types of operators:

## Table of Contents

1. [Arithmetic Operators](#arithmetic-operators)
2. [Relational Operators](#relational-operators)
3. [Logical Operators](#logical-operators)
4. [Bitwise Operators](#bitwise-operators)
5. [Assignment Operators](#assignment-operators)
6. [Conditional (Ternary) Operator](#conditional-ternary-operator)
7. [Increment and Decrement Operators](#increment-and-decrement-operators)
8. [Miscellaneous Operators](#miscellaneous-operators)

## Arithmetic Operators

Arithmetic operators are used to perform mathematical operations like addition, subtraction, multiplication, etc.

| Operator | Description                        | Example |
| -------- | ---------------------------------- | ------- |
| `+`      | Addition                           | `a + b` |
| `-`      | Subtraction                        | `a - b` |
| `*`      | Multiplication                     | `a * b` |
| `/`      | Division                           | `a / b` |
| `%`      | Modulus (remainder after division) | `a % b` |

### Example: Arithmetic Operators

```c
#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("a + b = %d\n", a + b);   // Addition: 13
    printf("a - b = %d\n", a - b);   // Subtraction: 7
    printf("a * b = %d\n", a * b);   // Multiplication: 30
    printf("a / b = %d\n", a / b);   // Division: 3 (integer division)
    printf("a %% b = %d\n", a % b);  // Modulus: 1

    // Floating point division
    float c = 10.0, d = 3.0;
    printf("c / d = %.2f\n", c / d); // Division: 3.33

    return 0;
}
```

## Relational Operators

Relational operators are used to compare two values.

| Operator | Description              | Example  |
| -------- | ------------------------ | -------- |
| `==`     | Equal to                 | `a == b` |
| `!=`     | Not equal to             | `a != b` |
| `>`      | Greater than             | `a > b`  |
| `<`      | Less than                | `a < b`  |
| `>=`     | Greater than or equal to | `a >= b` |
| `<=`     | Less than or equal to    | `a <= b` |

### Example: Relational Operators

```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("a == b: %d\n", a == b); // Equal to: 0 (false)
    printf("a != b: %d\n", a != b); // Not equal to: 1 (true)
    printf("a > b: %d\n", a > b);   // Greater than: 0 (false)
    printf("a < b: %d\n", a < b);   // Less than: 1 (true)
    printf("a >= b: %d\n", a >= b); // Greater than or equal to: 0 (false)
    printf("a <= b: %d\n", a <= b); // Less than or equal to: 1 (true)

    return 0;
}
```

## Logical Operators

Logical operators are used to determine the logic between variables or values.

| Operator | Description | Example    |
| -------- | ----------- | ---------- |
| `&&`     | Logical AND | `a && b`   |
| `\|\|`   | Logical OR  | `a \|\| b` |
| `!`      | Logical NOT | `!a`       |

### Example: Logical Operators

```c
#include <stdio.h>

int main() {
    int a = 1, b = 0; // In C, 0 is false, non-zero is true

    printf("a && b: %d\n", a && b); // Logical AND: 0 (false)
    printf("a || b: %d\n", a || b); // Logical OR: 1 (true)
    printf("!a: %d\n", !a);         // Logical NOT: 0 (false)
    printf("!b: %d\n", !b);         // Logical NOT: 1 (true)

    // Complex condition
    int x = 5, y = 10;
    printf("(x > 0) && (y > x): %d\n", (x > 0) && (y > x)); // 1 (true)

    return 0;
}
```

## Bitwise Operators

Bitwise operators work on bits and perform bit-by-bit operations.

| Operator | Description        | Example  |
| -------- | ------------------ | -------- |
| `&`      | Bitwise AND        | `a & b`  |
| `\|`     | Bitwise OR         | `a \| b` |
| `^`      | Bitwise XOR        | `a ^ b`  |
| `~`      | Bitwise complement | `~a`     |
| `<<`     | Left shift         | `a << n` |
| `>>`     | Right shift        | `a >> n` |

### Example: Bitwise Operators

```c
#include <stdio.h>

int main() {
    unsigned int a = 60; // 60 = 0011 1100 in binary
    unsigned int b = 13; // 13 = 0000 1101 in binary

    printf("a & b = %u\n", a & b);   // Bitwise AND: 12 (0000 1100)
    printf("a | b = %u\n", a | b);   // Bitwise OR: 61 (0011 1101)
    printf("a ^ b = %u\n", a ^ b);   // Bitwise XOR: 49 (0011 0001)
    printf("~a = %u\n", ~a);         // Bitwise complement: 4294967235
    printf("a << 2 = %u\n", a << 2); // Left shift: 240 (1111 0000)
    printf("a >> 2 = %u\n", a >> 2); // Right shift: 15 (0000 1111)

    return 0;
}
```

## Assignment Operators

Assignment operators are used to assign values to variables.

| Operator | Description            | Example   | Equivalent to |
| -------- | ---------------------- | --------- | ------------- |
| `=`      | Simple assignment      | `a = b`   | `a = b`       |
| `+=`     | Add and assign         | `a += b`  | `a = a + b`   |
| `-=`     | Subtract and assign    | `a -= b`  | `a = a - b`   |
| `*=`     | Multiply and assign    | `a *= b`  | `a = a * b`   |
| `/=`     | Divide and assign      | `a /= b`  | `a = a / b`   |
| `%=`     | Modulus and assign     | `a %= b`  | `a = a % b`   |
| `<<=`    | Left shift and assign  | `a <<= b` | `a = a << b`  |
| `>>=`    | Right shift and assign | `a >>= b` | `a = a >> b`  |
| `&=`     | Bitwise AND and assign | `a &= b`  | `a = a & b`   |
| `\|=`    | Bitwise OR and assign  | `a \|= b` | `a = a \| b`  |
| `^=`     | Bitwise XOR and assign | `a ^= b`  | `a = a ^ b`   |

### Example: Assignment Operators

```c
#include <stdio.h>

int main() {
    int a = 10;

    printf("Initial value: a = %d\n", a);

    a += 5;  // a = a + 5
    printf("After a += 5: a = %d\n", a);

    a -= 3;  // a = a - 3
    printf("After a -= 3: a = %d\n", a);

    a *= 2;  // a = a * 2
    printf("After a *= 2: a = %d\n", a);

    a /= 4;  // a = a / 4
    printf("After a /= 4: a = %d\n", a);

    a %= 2;  // a = a % 2
    printf("After a %%= 2: a = %d\n", a);

    return 0;
}
```

## Conditional (Ternary) Operator

The conditional operator is a shorthand way to write simple if-else statements.

**Syntax**: `condition ? expression1 : expression2`

### Example: Conditional Operator

```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int max;

    // Find maximum using ternary operator
    max = (a > b) ? a : b;
    printf("Maximum: %d\n", max);

    // Ternary operator can be used with printf directly
    printf("The %s number is %d\n",
           (a % 2 == 0) ? "even" : "odd", a);

    return 0;
}
```

## Increment and Decrement Operators

The increment and decrement operators increase or decrease the value of a variable by 1.

| Operator | Description | Example        |
| -------- | ----------- | -------------- |
| `++`     | Increment   | `a++` or `++a` |
| `--`     | Decrement   | `a--` or `--a` |

### Example: Increment and Decrement Operators

```c
#include <stdio.h>

int main() {
    int a = 10, b = 10;
    int result1, result2;

    // Pre-increment: increment first, then use the value
    result1 = ++a;
    printf("After pre-increment, a = %d, result1 = %d\n", a, result1);

    // Post-increment: use the value first, then increment
    result2 = b++;
    printf("After post-increment, b = %d, result2 = %d\n", b, result2);

    // Pre-decrement and post-decrement work similarly
    a = 10, b = 10;
    result1 = --a;
    result2 = b--;
    printf("After pre-decrement, a = %d, result1 = %d\n", a, result1);
    printf("After post-decrement, b = %d, result2 = %d\n", b, result2);

    return 0;
}
```

## Miscellaneous Operators

### The sizeof Operator

The `sizeof` operator returns the size of a variable or data type in bytes.

```c
#include <stdio.h>

int main() {
    int a;
    double b;
    char c;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of double: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu byte\n", sizeof(c));
    printf("Size of int pointer: %zu bytes\n", sizeof(int*));

    return 0;
}
```

### The Comma Operator

The comma operator allows multiple expressions to be evaluated in a single statement.

```c
#include <stdio.h>

int main() {
    int a, b;

    // Using comma operator in for loop
    for(a = 0, b = 10; a <= 10; a++, b--)
        printf("a = %d, b = %d\n", a, b);

    // Using comma operator in an expression
    int x = (a = 5, b = 7, a + b);
    printf("x = %d\n", x); // x will be 12

    return 0;
}
```

### The Address (&) and Dereference (\*) Operators

The address operator returns the memory address of a variable, while the dereference operator accesses the value at a memory address.

```c
#include <stdio.h>

int main() {
    int var = 20;
    int *ptr;

    ptr = &var; // Address of operator &

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr); // Dereference operator *

    // Modify the value using the pointer
    *ptr = 100;
    printf("After modification, value of var: %d\n", var);

    return 0;
}
```

### The Member Selection Operators (. and ->)

These operators are used to access members of structures and unions.

```c
#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Using the dot operator (.)
    struct Person person1;
    person1.age = 30;
    printf("Person1 age: %d\n", person1.age);

    // Using the arrow operator (->)
    struct Person *personPtr = &person1;
    personPtr->age = 35; // Equivalent to (*personPtr).age = 35
    printf("Person1 age after update: %d\n", person1.age);

    return 0;
}
```

## Operator Precedence

Operator precedence determines the order in which operations are performed in an expression. Here's a simplified precedence table, from highest to lowest:

| Precedence | Operator           | Description                        | Associativity |
| ---------- | ------------------ | ---------------------------------- | ------------- |
| 1          | `()`               | Parentheses                        | Left to right |
| 1          | `[]`               | Array subscript                    | Left to right |
| 1          | `.`                | Structure/union member             | Left to right |
| 1          | `->`               | Structure/union member via pointer | Left to right |
| 2          | `++` `--`          | Postfix increment/decrement        | Left to right |
| 3          | `++` `--`          | Prefix increment/decrement         | Right to left |
| 3          | `+` `-`            | Unary plus/minus                   | Right to left |
| 3          | `!` `~`            | Logical/bitwise NOT                | Right to left |
| 3          | `(type)`           | Type cast                          | Right to left |
| 3          | `*`                | Dereference                        | Right to left |
| 3          | `&`                | Address-of                         | Right to left |
| 3          | `sizeof`           | Size-of                            | Right to left |
| 4          | `*` `/` `%`        | Multiplication, division, modulo   | Left to right |
| 5          | `+` `-`            | Addition, subtraction              | Left to right |
| 6          | `<<` `>>`          | Bitwise shift left, right          | Left to right |
| 7          | `<` `<=` `>` `>=`  | Relational operators               | Left to right |
| 8          | `==` `!=`          | Equality operators                 | Left to right |
| 9          | `&`                | Bitwise AND                        | Left to right |
| 10         | `^`                | Bitwise XOR                        | Left to right |
| 11         | `\|`               | Bitwise OR                         | Left to right |
| 12         | `&&`               | Logical AND                        | Left to right |
| 13         | `\|\|`             | Logical OR                         | Left to right |
| 14         | `?:`               | Conditional operator               | Right to left |
| 15         | `=` `+=` `-=` etc. | Assignment operators               | Right to left |
| 16         | `,`                | Comma operator                     | Left to right |

### Example: Operator Precedence

```c
#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 10;
    int result;

    // Without parentheses: multiplication has higher precedence than addition
    result = a + b * c;
    printf("a + b * c = %d\n", result); // 35

    // With parentheses: addition is performed first
    result = (a + b) * c;
    printf("(a + b) * c = %d\n", result); // 80

    // Complex expression with multiple operators
    result = a + b * c / 2 - 1;
    printf("a + b * c / 2 - 1 = %d\n", result); // 19

    return 0;
}
```

Understanding operator precedence is crucial for writing correct expressions in C and avoiding unexpected results.
