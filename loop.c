#include <stdio.h>

/* 1. int main (){
    int i,m;
    printf("The number of times you want to write hello world: ");
    scanf("%d", &i);
    for (m = 1;m <= i;m += 1)  {
    printf("Hello world \n");
    }
} */

/* 2. int main () {
    int i;

    for (i = 0;i <= 10; i = i+1) {
        printf("%d \n", i);
    }

    return 0;

} */

// ++i (pre increment operator)
// i++ (post increment operator)

/* 3. int main () {
    int n,i;
    printf("Enter the number: ");
    scanf("%d", &n);
    i = 0;
    while (i <= n) {
        printf("%d \n", i);
        i ++;
    }
    return 0;
} */

/* int main () {
    int i,n;
    printf("Enter the number: ");
    scanf("%d", &n);

    do {
        printf("%d \n", i);
        i++;
    } while (i <= n);
    return 0;
} */

/* int main () {
    int i,n,sum;
    printf("Enter the number: ");
    scanf("%d", &n);
    i= 1;
    sum = 0;
    do {
        sum += i;
        i ++;
    } while (i <= n);
    printf("The sum of first %d natural numbers is: %d \n", n,sum);
    printf("The mean of first %d natural numbers is: %d \n", n,(sum/n));
    return 0;
} */

/* int main () {
    int n,i,table;
    printf("enter the number of which table you want: ");
    scanf("%d", &n);
    i=1;

    do {
        table = n * i;
        printf("%d * %d = %d \n", n , i, table);
        i++;
    } while (i <= 10);
    return 0;
} */

/* int main () {
    for (int i = 5 ; i <= 50 ; i++ ) {
        if ( i % 2 == 0) {
            continue;
        }
    printf("%d \n", i);
    }
    return 0;
} */

/* int main () {
    int n,i,fact;
    printf("Enter a number n: ");
    scanf("%d", &n);
    fact = 1;
    for (i = n; i >= 1 ; i -= 1) {
        fact = fact * i;
    }
    printf("Fatorial of %d is %d \n", n , fact);
    return 0;
} */

/* int main () {
    int i,sum;
    sum = 0;
    for (i = 5; i <= 50; i++) {
        sum += i ;
    }
    printf("The sum of num is %d \n",sum);
    return 0;
} */

int main() {
    for (int i = 1; ; i++) {
        printf("%d", i);
    }
    return 0;
}

