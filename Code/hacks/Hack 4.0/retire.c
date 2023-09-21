/**
 * Author: Immanuel Soh
 *         isoh2@huskers.unl.edu
 *
 * Date: 2023/09/16
 *
 * This program produces an amortization table for a 401(k) account
 *
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

// Initialize starting variables

    double initialBalance, monthlyContribution, averageRateReturn, averageRateInflation;
    int yearsToRetire, monthsToRetire;

// Check for correct number of arguments

    if(argc != 6) {
        printf("ERROR: Please enter in a valid number of inputs (initialBalance monthlyContribution averageRateReturn averageRateInflation yearsToRetire)");
        exit(1);
    }

// Read command line inputs

    initialBalance = atof(argv[1]);
    monthlyContribution = atof(argv[2]);
    averageRateReturn = atof(argv[3]);
    averageRateInflation = atof(argv[4]);
    yearsToRetire = atoi(argv[5]);
    monthsToRetire = yearsToRetire*12;

// Check all inputs and ensure none are negative

    for(int i=1; i<6; i++) {
        if(atof(argv[i]) < 0.0) {
            printf("ERROR: Numbers cannot be negative");
            exit(1);
        }
    }


// Check to see if total annual contribution does not exceed 18500

    if(monthlyContribution*12 >= 18500) {
        printf("ERROR: Annual contribution cannot exceed 18500");
        exit(1);
    }

// Calculate monthly interest rate and initialize secondary variables

    double monthlyInterestRate = (((1.0 + averageRateReturn) / (1.0 + averageRateInflation)) - 1.0) / 12.0;
    double monthlyInterest = 0.0;
    double totalMonthlyInterest = 0.0;
    double displayBalance = round(initialBalance * 100) / 100;

// Print amortization table

    printf("Month    Interest     Balance \n");

    for(int i=1; i<=(monthsToRetire); i++) {
        monthlyInterest = round((displayBalance * monthlyInterestRate) * 100) / 100;
        totalMonthlyInterest = round((totalMonthlyInterest + monthlyInterest) * 100) / 100;
        displayBalance = (displayBalance + monthlyInterest + monthlyContribution);

        printf("    %d $     %.2f $  %.2f\n", i, monthlyInterest, displayBalance);
    }

    printf("Total Interest Earned: $  %.2f\n", totalMonthlyInterest);
    printf("Total Nest Egg: $ %.2f\n", displayBalance);

    return 0;
}