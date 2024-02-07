#include <stdio.h>
#include <math.h>

int main()
{
    int num, orignal,sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    orignal = num;

    printf("The divisors are: ");

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d \t",i);
            sum += i;
        }
    }
    printf("\nThe sum is %d \n", sum);
    if (orignal == sum)
    {
        printf("The number is perfect \n");
    }
    else
    {
        printf("The number is not perfect \n");
    }
    return 0;
}
