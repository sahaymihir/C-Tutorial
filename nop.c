#include <math.h>
#include <stdio.h>

int main() {

  int input, rem, nop = 0, noc = 0;

  do {
    printf("Enter a number to read (enter -1 to exit): ");
    scanf("%d", &input);
    if (input == -1) {
      printf("Exiting the program... \n");
    } else if (input < 0) {
      printf("Invalid Input...\nRestarting the program \n");
    } else if (input < 2) {
      printf("This is neither a prime nor a composite number\n");
      nop = nop + 0;
      noc = noc + 0;
    } else if (input == 2 || input == 3) {
      printf("This is a prime number\n");
      nop = nop + 1;
    } else {
      for (int i = 2; i <= sqrt(input); i++) {
        rem = input % i;
        if (rem == 0) {
          printf("This is a composite number\n");
          noc = noc + 1;
          break;
        }
      }
      if (rem != 0) {
        printf("This is a prime number\n");
        nop = nop + 1;
      }
    }
  } while (input != -1);

  printf("No of primes encountered: %d \n", nop);
  printf("No of composites encountered: %d \n", noc);

  return 0;
}
