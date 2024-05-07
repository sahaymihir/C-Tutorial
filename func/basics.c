#include <stdio.h>
#include <math.h>

int sum(int a,int b) {
    return a + b;
}

int main () {
    int m,n;
    
    printf("Enter a number: ");
    scanf("%d",&m);
    
    printf("Enter another number: ");
    scanf("%d",&n);

    printf("The sum is %d",sum(m,n));

    return 0;
}