/**
 * @file weightConverter.c
 * @brief This program converts weight from pounds to kilograms and vice versa.
 * 
 * @author FaisalSWEN
 * @date 2025-05-20
 * @version 1.0
 * 
 * @details
 * This program prompts the user to enter a weight in either pounds or kilograms,
 * then converts it to the other unit. The conversion formulas used are:
 * - Pounds to Kilograms: kg = lb / 2.2046
 * - Kilograms to Pounds: lb = kg * 2.2046
 * @note
 * The program uses a simple menu to allow the user to choose the conversion type.
 * The user can enter '1' for pounds to kilograms or '2' for kilograms to pounds.
 * The program will continue to prompt the user until they choose to exit by entering '0'.
 */

#include <stdio.h>

int main() {
    float weight;
    int choice;

    do {
        printf("[+] Weight Converter\n");
        printf("[+] 1. Pounds to Kilograms\n");
        printf("[+] 2. Kilograms to Pounds\n");
        printf("[+] 0. Exit\n");
        printf("[#] Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n[#] Enter weight in pounds: ");
                scanf("%f", &weight);
                printf("[+] %.2f pounds = %.2f kilograms\n\n1", weight, weight / 2.2046);
                break;
            case 2:
                printf("\n[#] Enter weight in kilograms: ");
                scanf("%f", &weight);
                printf("[+] %.2f kilograms = %.2f pounds\n\n", weight, weight * 2.2046);
                break;
            case 0:
                printf("\n[0] Exiting...\n");
                break;
            default:
                printf("\n[!] Invalid choice! Please try again.\n\n");
        }
    } while (choice != 0);

    return 0;
}