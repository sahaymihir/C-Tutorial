#include <stdio.h>
#include <math.h>

int main () {
    int n,k;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter no of terms: ");
    scanf("%d", &k);

    for (int j=1 ; j<=n ; j++) {
        for (int i = 1;i <= k;i++){
        printf("%d \t",j*i);
    }
    }

    return 0;
}