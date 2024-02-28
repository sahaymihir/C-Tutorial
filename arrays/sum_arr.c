#include <stdio.h>
#include <math.h>

int main()
{
    int a[10], b[10], sum[10], p, q;

    printf("Enter numbers for 1st array: ");
    scanf("%d", &p);

    printf("Enter numbers for 2nd array: ");
    scanf("%d", &q);
    if (p == q)
    {
        printf("Enter n numers for 1st array \n");
        for (int i = 0; i < p; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("Enter n numers for 2nd array \n");
        for (int i = 0; i < q; i++)
        {
            scanf("%d", &b[i]);
        }

        printf("The numbers are: \n");
        for (int i = 0; i < p; i++)
        {
            sum[i] = a[i] + b[i];
            printf("%d \t", sum[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Enter equal no of elements \n");
    }

    return 0;
}
