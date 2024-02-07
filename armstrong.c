#include <stdio.h>
#include <math.h>

int main()
{
    int n, orignal, sum = 0;
    double c, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    orignal = n;

    while (n != 0)
    {
        c++;
        n /= 10;
    }

    while (n != 0)
    {
        digit = n % 10;
        digit = pow(digit, c);
        printf("%d \t", digit);
        sum += digit;
        printf("%d \t", sum);

        if (orignal == sum)
        {
            printf("This number is armstrong number \n");
        }
        else
        {
            printf("This is not a armstrong number \n");
        }
        n /= 10;
    }

    return 0;
}