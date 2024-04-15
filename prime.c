#include <stdio.h>
#include <math.h>

int Prime(int a)
{
    int prime = 1;

    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            prime = 0;
        }
    }

    return prime;
}

void PrimeDetector(int a[100][100], int m, int n)
{
    static int sum = 0;
    int num, p1, b[100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            num = a[i][j];
            if (Prime(num))
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }
}

int main()
{
    int a[100][100], m, n;

    printf("Enter the number of rows and column: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The Given Matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    PrimeDetector(a, m, n);

    printf("\nThe new Matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}