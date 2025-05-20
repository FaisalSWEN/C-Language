/**
 * @file userInput.c
 * @brief This program demonstrates how to read user input in C.
 * 
 * @author FaisalSWEN
 * @date 2025-05-10
 * @version 1.0
 */

#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables
    char name[50] = ""; // Array to store the name
    int age = 0; // Variable to store the age
    char cLangGrade = '\0'; // Variable to store the grade
    float gpa = 0.0f; // Variable to store the GPA

    // Read a string from the user
    printf("[#] Enter your name: ");
    fgets(name, sizeof(name), stdin); // Use fgets to read a string with spaces
    // Remove the newline character from the string
    name[strcspn(name, "\n")] = '\0'; // strcspn finds the first occurrence of '\n' and replaces it with '\0'
    // Equivalent Solution: [strlen(name) - 1] = '\0';
    // Note: fgets is safer than gets as it prevents buffer overflow

    // Read an integer from the user
    printf("[#] Enter your age: "); 
    scanf("%d", &age); 
    
    // Read a character from the user
    printf("[#] Enter your C language grade: ");
    scanf(" %c", &cLangGrade); // Note the space before %c to consume any leftover newline character

    // Read a float from the user
    printf("[#] Enter your GPA: ");
    scanf("%f", &gpa);

    // Print the user input
    printf("\n[+] Name: %s\n", name);
    printf("[+] Age: %d\n", age);
    printf("[+] C Language Grade: %c\n", cLangGrade);
    printf("[+] GPA: %.2f\n", gpa);

    // Print a message indicating the end of the program
    printf("[+] User input completed.\n");
    return 0;
}