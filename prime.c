#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int i = 2, count = 0;
    while (i <= sqrt(num))
    {
        if ((num % i) == 0)
        {
            count++;
            break;
        }
        i++;
    }

    if (count == 0)
    {
        printf("%d is a prime number \n", num);
    }
    else
    {
        printf("%d is a composite \n", num);
    }

    return 0;
}