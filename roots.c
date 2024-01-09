// To find the roots of a quadratic equation
// It is still not showing incorrect roots

#include<stdio.h>
#include<math.h>

int main () {
    float a , b , c , d , re , im  ;
    printf("Enter the coefficient of x^2: ");
    scanf("%f", &a);
    printf("Enter the coefficient of x: ");
    scanf("%f", &b);
    printf("Enter the constant: ");
    scanf("%f", &c);
    
    d = (pow(b,2) - 2 * a * c);
    re = (-b / (2 * a));
    im = (sqrt(fabs(d)))/(2 * a);

    if (d < 0) {
        printf("The roots are imaginary \n");
        printf("The roots of this quadratic equation is %f+%fi , %f-%fi \n",re, im, re, im);
    } else if (d == 0) {
        printf("The roots are real and same \n");
        printf("The roots of this quadratic equation is %f , %f \n", re, re );
    } else if (d > 0) {
        printf("The roots are real and distinct \n");
        printf("The roots of this quadratic equation is %f , %f \n", re + im, re - im );
    }

    return 0;
}
