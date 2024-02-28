#include <stdio.h>
#include <math.h>

int main()
{
    double angle, sign, p, term = 0;
    int n, fact = 1;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    angle = (angle * (3.14 / 180));

    for (int i = 0; i < n; i++)
    {
        p = (2 * i) + 1;

        for (int j = 1; j <= p; j++)
        {
            fact = fact * j;
        }

        term += (pow(-1, i) * pow(angle, p) / (fact));
    }
    printf("The value is %f \n", term);
    return 0;
}
