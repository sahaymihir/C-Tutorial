#include <stdio.h>
#include <math.h>

int main()
{
    int lower, upper, num;

    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    num = lower;

    while (num <= upper)
    {
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
            printf("%d \t", num);
        }
        num++;
    }
    return 0;
}