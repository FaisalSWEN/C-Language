/**
 * @file strings.c
 * @brief This program demonstrates the use of string functions in C.
 * 
 * @author FaisalSWEN
 * @date 2025-05-10
 * @version 1.0
 */

#include <stdio.h>
#include <string.h> // Include string library for string manipulation functions

int main() {
    // Declare and initialize a string
    char greetings[] = "Hi";
    char name[] = "FaisalSWEN";

    char location[] = "Saudi Arabia, Riyadh";
    char concatenated[] = "Your Location is: ";

    // Concatenate strings
    strcat(concatenated, location);

    // Print the concatenated string
    printf("\n[+] %s %s\n", greetings, name);
    printf("[+] %s\n", concatenated);

    return 0;
}