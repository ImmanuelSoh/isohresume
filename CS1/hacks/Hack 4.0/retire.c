/**
 * Author: Immanuel Soh
 *         isoh2@huskers.unl.edu
 *
 * Date: 2023/09/14
 *
 * This program produces an amortization table for a 401(k) account
 *
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

    double initialBalance, monthlyContribution, averageRateReturn, averageRateInflation;
    int yearsToRetire, monthsToRetire;

    if(argc != 6) {
        printf("ERROR: Please enter in a valid number of inputs (initialBalance monthlyContribution averageRateReturn averageRateInflation yearsToRetire)");
        exit(1);
    }

    initialBalance = atof(argv[1]);
    monthlyContribution = atof(argv[2]);
    averageRateReturn = atof(argv[3]);
    averageRateInflation = atof(argv[4]);
    yearsToRetire = atoi(argv[5]);
    monthsToRetire = yearsToRetire*12;

// TODO: restrict averageRateReturn and averageRateInflation between 0 and 1
 //   if((averageRateReturn)||(averageRateInflation)) {

 //   }

    double monthlyInterest = ((1 + averageRateReturn) / (1 + averageRateInflation)) - 1;
    double displayBalance = initialBalance;

    printf("Month    Interest     Balance \n");
// TODO: finish calculations and make sure rounding is correct
    for(int i=1; i<=(monthsToRetire); i++) {
//        monthlyInterest =;
//        displayBalance =;
        printf("    %d $     64.23 $  10564.23\n", i);
    }

    printf("Total Interest Earned: $  41556.16\n");
    printf("Total Nest Egg: $ 111556.16\n");

    return 0;
}