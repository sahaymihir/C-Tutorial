#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumofdigits(int n) {
    if (n % 10 == n) {
        return n;
    } else {
        return (n % 10 + sumofdigits(n / 10));
    }
}

int main () {
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("The sum is %d",abs(sumofdigits(num)));
    
    return 0;
}