#include <stdio.h>

int main () {
    int j;
    const int MAX = 80;
    char str[MAX];
    printf("Enter a password");
    for (j = 0;j < 6;j++) {
        str[j] = getch();
        printf("*");
    }

    printf("\nYour password is: ");
    puts(str);

    return 0;
}