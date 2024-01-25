#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, a;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1 || n == 0)
    {
        printf("%d is neither a prime nor a composite number \n", n);
    }
    else if (n == 2)
    {
        printf("This is a prime number \n");
    }
    else if (n < 0)
    {
        printf("Enter a positive integer \n");
    }
    else
    {
        for (i = 2; i < sqrt(n); i++)
        {
            a = n % i;

            if (a == 0)
            {
                break;
                a = 0;
            }
        }

        switch (a)
        {

        case 0:
            printf("This is not a prime number \n");
            break;

        default:
            printf("This is a prime number \n");
            break;
        }
    }

    return 0;
}