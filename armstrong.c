#include <stdio.h>
#include <math.h>

int main () {
    int n,orignal,digit,sum = 0;

    printf("Enter a number: ");
    scanf("%d",&n);

    orignal = n;

    while (n != 0) {
        digit = n % 10;
        digit = pow(digit,3);
        sum += digit;
        printf("%d \n %d \n",digit,sum);
        n /= 10;
    }

    if (orignal == sum) {
        printf("This number is armstrong number \n");
    } else {
        printf("This is not a armstrong number \n");
    }

    return 0;
}
