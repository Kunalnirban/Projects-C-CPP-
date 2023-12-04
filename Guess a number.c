#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess(int n, int count) {
  int a;
  printf("Enter a number: \n");
  scanf("%d", &a);
  count++;

  if (a == n) {
    printf("\tCongratulations! You guessed the correct answer in %d count.\n", count);
    exit(0);
  } else if (a > n) {
    printf("Your guess is too high.\nGuess again: ");
  } else {
    printf("Your guess is too low.\nGuess again: ");
  }

  guess(n, count);
}

int main() {
  printf("Thinking of a number between 1 to 100...!!\n");
  srand(time(0));
  int number = rand() % 100 + 1;
  printf("Now guess what I have thought.\n\n");
  guess(number, 0);

  return 0;
}