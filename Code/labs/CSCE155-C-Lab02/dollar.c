/**
* Author: Immanuel Soh
*
* This program converts US Dollars to British
* Pounds and Japanese Yen based on the conversion
* rates of 1 US Dollar to 0.79 British Pounds and
* 1 US Dollar to 127.65 Japanese Yen.
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double main(double argc, char **argv) {
    double USD = 0;
    printf("Please input the total amount of US Dollars: ");
    scanf("%lf", &USD);

    double Fee = USD / 10;
    printf("Fee (10%%): $%.2lf\n", Fee);

    double Taxed = USD - Fee;

    double GBP = (Taxed / 2) * 0.79;

    double JPY = (Taxed / 2) * 127.65;

    JPY = round(JPY);

    printf("You get:\n %.2lf GBP\n %.0f JPY", GBP, JPY);
}