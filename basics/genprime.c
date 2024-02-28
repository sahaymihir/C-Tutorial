#include <stdio.h>
#include <math.h>

int main()
{
    int lower, upper, num;

    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    while (lower <= upper)
    {
        int i = 2, count = 0;
        while (i <= sqrt(lower))
        {
            if ((lower % i) == 0)
            {
                count++;
                break;
            }
            i++;
        }

        if (count == 0)
        {
            printf("%d \t", lower);
        }
        lower++;
    }
    return 0;
}