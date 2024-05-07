#include <stdio.h>
#include <math.h>

int sum(int *p, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(p + i);
    }
    return sum;
}

int main()
{
    int num, *p;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", (p + i));
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d\t", *(p + i));
    }

    printf("\nThe sum of the elements is %d", sum(p, num));

    return 0;
}