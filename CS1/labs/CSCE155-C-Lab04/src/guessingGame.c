/**
 * Author: Immanuel Soh
 *         isoh2@huskers.unl.edu
 * Date:   2023/09/12
 *
 * This program plays a guessing game with the user.
 * It selects a random number between 1 and 1000 and
 * prompts the user to guess the value, informing them
 * of whether or not it is higher or lower than the
 * actual value.  Once the user guesses correctly, the
 * game ends and the number of guesses is displayed.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv) {

  // the game will be played by creating a random
  // number between 1 and 1000
  int n = 1000;

  // seed the random number generator
  srand(time(NULL));

  // the program generates a random number between 1 and 1000
  // the user will try to guess what this number is
  int number = (rand() % n) + 1;

  // initialize the user's "guess" to be an invalid value
  int guess = -10;
  int numGuesses = 0;

  printf("Guess-A-Number Game!\n");

  //TODO: place your code here

  while(guess!=number) {

    printf("Enter a number between 1 and %d\n", n);
    scanf("%d", &guess);

  // Tried to also see if I could get it to only accept integers but I didn't know where to start

    if(guess<=0) {
      printf("Please enter a positive integer between 1 and %d\n", n);

    }
    if(guess==number) {

      numGuesses++;
      printf("Congratulations, you found it!  Number of guesses: %d\n", numGuesses);

    }

    if(guess<number) {

      numGuesses++;
      printf("Sorry, the number is higher! Number of guesses: %d\n", numGuesses);

    }

    if(guess>number) {

      numGuesses++;
      printf("Sorry, the number is lower! Number of guesses: %d\n", numGuesses);
    }
  }
  return 0;
}
