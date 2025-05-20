/**
 * @file compoundInterestCalculator.c
 * @brief This program calculates the compound interest based on user input.
 * 
 * @author FaisalSWEN
 * @date 2025-05-20
 * @version 1.0
 * 
 * @details
 * @note This program uses the math library for mathematical calculations.
 * @note The formula for compound interest is A = P(1 + r/n)^(nt), where:
 *      - A is the amount of money accumulated after n years, including interest.
 *     - P is the principal amount (the initial amount of money).
 *     - r is the annual interest rate (decimal).
 *    - n is the number of times that interest is compounded per year.
 *    - t is the number of years the money is invested or borrowed for.
 */

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, amount, compoundInterest;
    int n, time;

    // Get user input
    printf("[#] Enter the principal amount: $");
    scanf("%lf", &principal);
    
    printf("[#] Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    
    printf("[#] Enter the number of times that interest is compounded per year: ");
    scanf("%d", &n);
    
    printf("[#] Enter the time in years: ");
    scanf("%d", &time);

    // Convert rate from percentage to decimal
    rate = rate / 100;

    // Calculate compound interest
    amount = principal * pow((1 + rate / n), n * time);
    compoundInterest = amount - principal;

    // Display results
    printf("\n[+] The compound interest is: $%.2lf\n", compoundInterest);
    printf("[+] The total amount after %d years is: $%.2lf\n", time, amount);

    return 0;
}