/**
 * @file circleCalculator.c
 * @brief This program calculates the area, circumference, surface area, and volume of a circle based on user input.
 * 
 * @author FaisalSWEN
 * @date 2025-05-20
 * @version 1.0
 * 
 * @details
 * @note This program uses the math library for mathematical calculations.
 * @note The formulas used are:
 *       - Area of the circle: A = πr²
 *      - Circumference of the circle: C = 2πr
 *     - Surface area of the circle: SA = 4πr²
 *    - Volume of the circle: V = (4/3)πr³
 * * @note The value of π is defined in the math library as M_PI.
 * * @note The program uses the pow function to calculate the power of a number.
 */

#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    float radius = 0.0f; // Variable to store the radius

    // Read the radius from the user
    printf("[#] Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Print the results
    // 2D shapes
    printf("[+] Area of the circle: %.2f\n",  M_PI * pow(radius, 2));
    printf("[+] Circumference of the circle: %.2f\n", 2 * M_PI * radius);
    // 3D shapes
    printf("[+] Surface area of the circle: %.2f\n", 4 * M_PI * pow(radius, 2));
    printf("[+] Volume of the circle: %.2f\n", (4.0f / 3.0f) * M_PI * pow(radius, 3)); 

    return 0;
}