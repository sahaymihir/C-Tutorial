// evaluate the sin(x) series

#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main()
{
    int n;
    double p, x, sin = 0, term = 0;

    printf("Enter the angle in series: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    x = x * (PI / 180) ;

    for (int i = 0; i <= n; i++)
    {
        p = (2.0*i) - 1 ;
        int fact = 1;
        for (int j = 1; j <= p; j++)
        {
            fact = fact * j;
        }
        term = pow(-1.0, (double)i);
        for (int k = 1; k <= p; k++)
        {
            term *= x;
        }
        sin += term / fact ;
    }

    printf("The number is: %.2f \n", sin);

    return 0;
}