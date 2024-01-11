#include <stdio.h>
#include <math.h>

int main () {
    int choose;
    do {
    printf("Choose from the below programs: \n");
    printf("1. Sum of two numbers \n");
    printf("2. Find the greatest number \n");
    printf("3. Find roots of quadratic equation \n");
    printf("4. Check for eliglibity to vote \n");
    printf("5. exit \n");
    printf("Your choice: ");
    scanf("%d", &choose);

    switch (choose) {
        case 1:
            int num1,num2;
            printf("Input A: ");
            scanf("%d",&num1);
            printf("Input B: ");
            scanf("%d",&num2);
            printf("Sum: %d \n",num1+num2);
            break;

        case 2:
            int A, B , C;
            printf("Enter A: ");
            scanf("%d", &A);

            printf("Enter B: ");
            scanf("%d", &B);

            printf("Enter C: ");
            scanf("%d", &C);

            if (A > B) {
                if (A > C) {
                printf ("A is the largest number \n");
                } else {
                printf("C is the largest number \n");
                }
            } else if (B > C) {
                printf("B is the largest number \n");
            } else {
            printf("C is the largest number \n");
            }
            break;

        case 3:
            float a , b , c , d , re , im  ;
            printf("Enter the coefficient of x^2: ");
            scanf("%f", &a);
            printf("Enter the coefficient of x: ");
            scanf("%f", &b);
            printf("Enter the constant: ");
            scanf("%f", &c);
            
            d = (pow(b,2) - 4 * a * c); 
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
            break;
        
        case 4:
            int age;
            printf("Enter your age : ");
            scanf("%d", &age);
            if (age >= 18) {
            printf("Congrats! You are eligible to vote \n");
            }
            else{
                printf("You are not eligible to vote \n");
            }
            break;
            
    }
    } while (choose != 5);

    return 0;
}    