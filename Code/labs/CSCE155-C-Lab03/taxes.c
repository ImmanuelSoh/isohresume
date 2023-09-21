/** Author: Immanuel Soh
 *  isoh2@huskers.unl.edu
 *
 * Date: 2023/09/05
 *
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character
  getchar();

  printf("Do you have any children? (Y) or (N)? ");
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }

  //TODO: compute the tax, child credit, and total tax here
  if(numChildren >= 1) {
    childCredit = numChildren*2000.00;
  } else {
    childCredit = 0.00;
  }

  if(0 < agi && agi <= 19900) {
    tax = 0.1*agi;
  } else if(19900 < agi && agi <= 81050) {
    tax = (0.12*(agi-19900))+1990;
  } else if(81050 < agi && agi <= 172750) {
    tax = (0.22*(agi-81050))+9328;
  } else if(172750 < agi && agi <= 329850) {
    tax = (0.24*(agi-172750))+29502;
  } else if(329850 < agi && agi <= 418850) {
    tax = (0.32*(agi-329850))+67206;
  } else if(418850 < agi && agi <= 628300) {
    tax = (0.35*(agi-418850))+95686;
  } else {
    tax = (0.37*(agi-628300))+168933.50;
  }

  totalTax = tax-childCredit;

  if(totalTax < 0) {
    totalTax = 0;
  }

  if(agi <= 0){
    printf("Please enter a valid AGI");
  } else {
  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);
  }
  return 0;
}
