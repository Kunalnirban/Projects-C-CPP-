#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumner(int n) {
  srand(time(NULL));
  return rand() % n;
}

int greater(char p, char c) {
  if ((p == 'r') && (c == 's')) {
    return 1;
  }

  else if ((p == 's') && (c == 'r')) {
    return 0;
  }

  else if ((p == 'p') && (c == 's')) {
    return 0;
  }

  else if ((p == 's') && (c == 'p')) {
    return 1;
  }

  else if ((p == 'p') && (c == 'r')) {
    return 0;
  }

  else if ((p == 'r') && (c == 'p')) {
    return 1;
  }
  return -1;
}

int main() {
  int playerscore = 0, compscore = 0, temp;
  char player, comp;
  char dict[] = {'r', 'p', 's'};
  printf("\n\nHi, Welcome to the Rock Paper and Scssior Game\n");

  for (int i = 0; i < 3; i++) {
    printf("\n");
    printf("Your Turn\n");
    printf("Choose 1 for Rock\nChoose 2 for Paper\nChoose 3 for Scissor\n\n");
    printf("Enter choice: \n");
    scanf("%d", &temp);
    player = dict[temp - 1];

    printf("\nComputer's Turn\n");
    printf("Choose 1 for Rock\nChoose 2 for Paper\nChoose 3 for Scissor\n\n");
    printf("Enter choice: \n");
    temp = generateRandomNumner(3) + 1;
    printf("%d\n", temp);
    comp = dict[temp - 1];

    if (greater(player, comp) == 0) {
      compscore += 1;
      printf("\nBad Luck! Computer Wins\n");
      printf("Play Again\n");
    }

    else if (greater(player, comp) == 1) {
      playerscore += 1;
      printf("\nYay! You Wins\n");
      printf("Play Again\n");
    } else {
      printf("\nohh ! Tied\n");
      printf("Play Again\n");
    }
  }

  if (playerscore > compscore) {
    printf("\n\nCongratulations!! You won this game with %d points.\n ",
           playerscore - compscore);
  } else if (playerscore < compscore) {
    printf("\n\nSorry you lost. The computer wins by having a score of %d.",
           compscore);
  } else {
    printf("\n\nIt was tie between both.");
  }

  return 0;
}