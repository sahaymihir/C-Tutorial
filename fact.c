#include <stdio.h>
#include <math.h>

int main () {
    int n,fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n;i >= 1;i--){
        fact *= i;        
    }

    printf("The factorial of the number is %d \n", fact );

    return 0;
}