/**
 * @file myFirstProgram.c
 * @brief This is a simple C program that prints the result of math calulation to the console.
 * 
 * @author FaisalSWEN
 * @date 2025-05-10
 * @version 1.0
 */

#include <stdio.h> // Standard input/output library

int main() { // Main function where the program execution begins
    // Variable declaration
    int a = 5; // Declare an integer variable 'a' and initialize it to 5
    float b = 2.5; // Declare an integer variable 'b' and initialize it to 10
    float sum; // To store the result of the addition
    float multiply; // To store the result of the multiplication

    // Perform addition and multiplication
    sum = a + b;
    multiply = a * b;

    // Print the results to the console
    printf("\n[+] The sum of %d and %.1f is: %.1f\n", a, b, sum);
    printf("[+] The multiplication of %d and %.1f is: %.1f\n", a, b, multiply);
    
    // Return 0 to indicate successful execution
    return 0;
}