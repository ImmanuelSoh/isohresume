/** Author: Immanuel Soh
 *  isoh2@huskers.unl.edu
 *
 *  Date: 2023/09/07
 *
 *  This program provides information about cellular data usage in a 30-day plan
 *  after it accepts command line arguments as input.
 *
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  double planGigs, gigsUsed, remainingGigs, idealDailyUse, averageDailyUse, recommendedDailyUse = 0;
  int daysUsed = 0;

  if(argc != 4) {
    printf("ERROR: please enter exactly three arguments with the program (./a.out planGigs daysUsed gigsUsed)");
    exit(1);
  }

  planGigs = atof(argv[1]);
  daysUsed = atoi(argv[2]);
  gigsUsed = atof(argv[3]);
  remainingGigs = planGigs - gigsUsed;
  idealDailyUse = planGigs / 30;
  averageDailyUse = gigsUsed / daysUsed;
  recommendedDailyUse = (remainingGigs / (30 - daysUsed));

  if(((planGigs < 0)||(daysUsed < 0))||(gigsUsed< 0)) {
    printf("ERROR: negative inputs are not accepted");
    exit(1);
  }

// If data is already over the monthly limit, then display an overcharge message. Otherwise,
// if data is under the monthly limit, then check if the average rate of usage exceeds the
// ideal rate of usage or not

  if(gigsUsed > planGigs) {
    printf("%d days used, %d days remaining", daysUsed, 30 - daysUsed);
    printf("Average daily use: %lf GB/day \n", averageDailyUse);

    printf("You have already met your limit for this month. Looks like you're getting some overage charges... \n");

  }
  else if(averageDailyUse > idealDailyUse) {
    printf("%d days used, %d days remaining", daysUsed, 30 - daysUsed);
    printf("Average daily use: %lf GB/day \n", averageDailyUse);

    printf("You are EXCEEDING your average daily use (%lfGB/day).", idealDailyUse);
    printf("Continuing this high usage, you'll exceed your data plan by %lf GB. \n", ((gigsUsed + ((30 - daysUsed) * averageDailyUse)) - planGigs));

    printf("To stay below your data plan, use no more than %lf GB/day", recommendedDailyUse);

  }
  else if(averageDailyUse <= idealDailyUse) {
    printf("%d days used, %d days remaining", daysUsed, 30 - daysUsed);
    printf("Average daily use: %lf GB/day \n", averageDailyUse);

    printf("You are at or below your average daily use (%lf GB/day).", idealDailyUse);
    printf("You can use up to %lf GB/day and stay below your data plan limit", remainingGigs / (30 - daysUsed));

  }
  return 0;
}