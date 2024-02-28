#include<stdio.h>

int main ()
{
    int a[100][100],m,n,temp,sym = 1;

    printf("Enter rows: ");
    scanf("%d",&m);

    printf("Enter column: ");
    scanf("%d",&n);

    printf("\nEnter the elements: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
    }

    printf("\nGiven Matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    // Transpose Matrix
    int c[100][100];
    printf("\nTranspose Matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j]= a[j][i];
            printf("%d \t",c[i][j]);

            if (a[i][j] != c[i][j])
            {
                sym = 0;
            }
        }
        printf("\n");
    }

    if (sym == 0)
    {
        printf("The matrix is not symmetric \n");
    }
    else
    {
        printf("The matrix is symmetric \n");
    }

    return 0;
}
