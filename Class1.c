/* include <stdio.h>

int main()
{
    int inum = 2;

    switch (inum)
    {
    case 1.5:
        printf("ONE \n");
        break;

    case 2:
        printf("TWO \n");
        break;

    case 3:
        printf("THREE \n");
        break;

    case 4:
        printf("Four \n");
        break;
    }
    return 0;
} */

/* #include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    int disc;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        disc = 1;
    }
    else if (discriminant == 0) {
        disc = 0;
    }
    else {
        disc = -1;
    }

    switch (disc) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2*a);
            root2 = (-b - sqrt(discriminant)) / (2*a);
            printf("Roots are real and different.\n");
            printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
            break;
        case 0:
            root1 = root2 = -b / (2*a);
            printf("Roots are real and the same.\n");
            printf("root1 = root2 = %.2lf;", root1);
            break;
        case -1:
            {
                double realPart = -b / (2*a);
                double imaginaryPart = sqrt(-discriminant) / (2*a);
                printf("Roots are complex and different.\n");
                printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi", realPart, imaginaryPart, realPart, imaginaryPart);
            }
            break;
    }

    return 0;
} */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    int disc;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (signbit(discriminant)) {
        disc = -1;
    }
    else if (discriminant == 0) {
        disc = 0;
    }
    else {
        disc = 1;
    }

    switch (disc) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2*a);
            root2 = (-b - sqrt(discriminant)) / (2*a);
            printf("Roots are real and different.\n");
            printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
            break;
        case 0:
            root1 = root2 = -b / (2*a);
            printf("Roots are real and the same.\n");
            printf("root1 = root2 = %.2lf;", root1);
            break;
        case -1:
            {
                double realPart = -b / (2*a);
                double imaginaryPart = sqrt(-discriminant) / (2*a);
                printf("Roots are complex and different.\n");
                printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi", realPart, imaginaryPart, realPart, imaginaryPart);
            }
            break;
    }

    return 0;
}