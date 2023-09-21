/**
 * Author: Immanuel Soh
 *         isoh2@huskers.unl.edu
 * Date:   2023/09/12
 *
 * This is a series of exercises to introduce loop
 * control structures.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);

  // A simple for loop that prints 0 thru 9
  for(int i=0; i<10; i++) {
    printf("%d\n", i);
  }

  //1. Rewrite the given for loop as an equivalent while loop
  int i=10;
  while(i<20) {
    printf("%d ", i);
    i+=3;
  }

/*
  for(int i=10; i<20; i+=3) {
    printf("%d ", i);
  }
*/

  printf("\n");

  //2. Rewrite the given while loop as an equivalent for loop
  for(int k=3; k>-4; k--) {
    printf("%d ", k);
}

/*  int k = 3;
  while(k > -4) {
    printf("%d ", k);
    k--;
  }
*/

  printf("\n");

  //3. Print numbers 1 thru n separated by a comma except for
  //   the last one; example: 1, 2, 3, 4, 5
  for(int k=1; k<=n; k++) {
    if(k<n) {
      printf("%d, ", k);
      } else {
      printf("%d", k);
      }
  }

  printf("\n");

  //4. Print squares of numbers 1 thru n separated by a comma
  //   except for the last one; example: 1, 4, 9, 16, 25
  for(int k=1; k<=n; k++) {
    if(k<n) {
      printf("%d, ", k*k);
      } else {
      printf("%d", k*k);
      }
  }

  printf("\n");

  //5. Compute the summation of numbers 1 thru n and print
  //   the result; example: 1 + 2 + 3 + 4 + 5 = 15
  int sum = 0;
  for(int k=1; k<=n; k++) {
    if(k<n) {
      sum = sum + k;
      printf("%d + ", k);
      } else {
      sum = sum + k;
      printf("%d = %d", k, sum);
      }
  }

  printf("\n");

  //6. Compute the summation of squares of numbers 1 thru n
  //   and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
  sum = 0;
  for(int k=1; k<=n; k++) {
    if(k<n) {
      sum = sum + (k*k);
      printf("%d^2 + ", k);
      } else {
      sum = sum + (k*k);
      printf("%d^2 = %d", k, sum);
      }
  }

  printf("\n");

  //7. Compute the summation of even numbers 1 thru n and print
  //   the result; example (n=5): 2 + 4 = 6
  sum = 0;
  for(int k=1; k<=n; k++) {

  if((k%2)!=0){
    ;
      } else if((k<n)&&(k%2==0)) {
        sum = sum + k;
      if((k+2)>=n) {
        if((k+2)==n) {
          printf("%d + ", k);
          k+=2;
          sum = sum + k;
        }
        printf("%d = %d", k, sum);
        } else {
        printf("%d + ", k);
        }
      }
    }


  printf("\n");

  //8. Write a solution to the following variation of the FizzBuzz
  //   problem.  Print out integers 1 thru n, one to a line, except
  //   that if the integer is divisible by 7 print "Foo" instead.
  //   If the integer is divisible by 11 print "Bar" instead.  If
  //   the integer is divisible by both 7 and 11, print "FooBar"
  //   instead.
  for(int k=1; k<=n; k++) {
    if((k%7==0)&&(k%11==0)){
      printf("FooBar\n");
    } else if(k%7==0){
      printf("Foo\n");
    } else if(k%11==0){
      printf("Bar\n");
    } else {
      printf("%d\n", k);
    }
  }

  return 0;
}
