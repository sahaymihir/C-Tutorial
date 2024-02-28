#include<stdio.h>
#include<math.h>

int main ()
{
    int a[100][100], b[100][100],c[100][100],m,n,p,q,temp,trace = 0;

    printf("Enter rows for matrix A: ");
    scanf("%d",&m);

    printf("Enter column for matrix A: ");
    scanf("%d",&n);

    printf("\nEnter the elements: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
    }

    printf("Enter rows for matrix B: ");
    scanf("%d",&p);

    printf("Enter column for matrix B: ");
    scanf("%d",&q);

    printf("\nEnter the elements for matrix B: ");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
            scanf("%d",&b[i][j]);
    }

    printf("\nGiven Matrix A: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nGiven Matrix B: \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }

    // Multiply
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMultiplication Matrix C: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}


