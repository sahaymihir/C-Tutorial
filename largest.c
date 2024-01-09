#include <stdio.h>

int main () {
    int a, b , c;
    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    printf("Enter C: ");
    scanf("%d", &c);

    if (a > b) {
        if (a > c) {
            printf ("A is the largest number \n");
        } else {
            printf("C is the largest number \n");
        }
    } else if (b > c) {
        printf("B is the largest number \n");
    } else {
        printf("C is the largest number \n");
    }

return 0;
}