#include <stdio.h>
#include <stdlib.h>
int main() {
  int chars, i = 0;
  char *ptr;
  while (i < 3) {
    printf("\nEmployee: %d\nEnter the number of Characters in your Employee ID: ",i+1);
    scanf("%d",&chars);
    ptr = (char *)malloc((chars+1) * sizeof(char));
    printf("\nEnter Your Employee id: ");
    scanf("%s",ptr);
    printf("Your Employee id is: %s\n",ptr);
    free (ptr);

    i = i + 1;
  }

  return 0;
}