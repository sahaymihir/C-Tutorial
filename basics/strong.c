#include <stdio.h>
#include <math.h>

int main()
{
    int n, digit, orignal,sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    orignal = n;

        while (n != 0)
    {
        digit = n % 10;
        int fact = 1;
        for (int i = digit; i >= 1; i--)
        {
            fact = fact * i;
        }
        digit = fact;
        sum = sum + digit;
        n /= 10;
    }
    if (orignal == sum)
    {
        printf("This is a strong number \n");
    } else {
        printf("This is not a strong number \n");
    }

    return 0;
}