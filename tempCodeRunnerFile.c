#include <stdio.h>

int main () {
    int a;
    printf("Enter the number of rows: ");
    scanf("%d",&a);

    for (int i = 1; i <= a;i++) {
        printf("*");
    }

}