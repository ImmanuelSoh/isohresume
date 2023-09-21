/**
 * Author: Immanuel Soh
 * isoh2@huskers.unl.edu
 *
 * Date: 2023/09/16
 *
 * This program produces an amortization table for a 401(k) account
 *
 */

package unl.soc;

public class Retire {
    public static void main(String[] args) throws Exception {
        // Initialize starting variables

    double initialBalance, monthlyContribution, averageRateReturn, averageRateInflation;
    int yearsToRetire, monthsToRetire;

// Check for correct number of arguments

    if(args.length != 5) {
        System.out.printf("ERROR: Please enter in a valid number of inputs (initialBalance monthlyContribution averageRateReturn averageRateInflation yearsToRetire)");
        System.exit(1);
    }

// Read command line inputs

    initialBalance = Double.parseDouble(args[0]);
    monthlyContribution = Double.parseDouble(args[1]);
    averageRateReturn = Double.parseDouble(args[2]);
    averageRateInflation = Double.parseDouble(args[3]);
    yearsToRetire = Integer.parseInt(args[4]);
    monthsToRetire = yearsToRetire*12;

// Check all inputs and ensure none are negative

    for(int i=0; i<5; i++) {
        if(Double.parseDouble(args[i]) < 0.0) {
            System.out.printf("ERROR: Numbers cannot be negative");
            System.exit(1);
        }
    }


// Check to see if total annual contribution does not exceed 18500

    if(monthlyContribution*12 >= 18500) {
        System.out.printf("ERROR: Annual contribution cannot exceed 18500");
        System.exit(1);
    }

// Calculate monthly interest rate and initialize secondary variables

    double monthlyInterestRate = (((1.0 + averageRateReturn) / (1.0 + averageRateInflation)) - 1.0) / 12.0;
    double monthlyInterest = 0.0;
    double totalMonthlyInterest = 0.0;
    double displayBalance = Math.round(initialBalance * 100.00) / 100.00;

// Print amortization table

    System.out.printf("Month    Interest     Balance \n");

    for(int i=1; i<=(monthsToRetire); i++) {
        monthlyInterest = Math.round((displayBalance * monthlyInterestRate) * 100.00) / 100.00;
        totalMonthlyInterest = Math.round((totalMonthlyInterest + monthlyInterest) * 100.00) / 100.00;
        displayBalance = (displayBalance + monthlyInterest + monthlyContribution);

        System.out.printf("    %d $     %.2f $  %.2f\n", i, monthlyInterest, displayBalance);
    }

    System.out.printf("Total Interest Earned: $  %.2f\n", totalMonthlyInterest);
    System.out.printf("Total Nest Egg: $ %.2f\n", displayBalance);

    }

}
