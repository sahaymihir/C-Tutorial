#include<stdio.h>
#include<math.h>

int main ()
{
    int a[100][100],m,n,temp,trace = 0;
    float sum = 0;

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

    // Finding trace
    for (int i = 0; i < m; i++)
    {
        trace = trace + a[i][i];
    }
    printf("Trace: %d",trace);

    // Finding norm

    for (int i = 0;i <m;i++) {
        for (int j = 0;j <n;j++) {
            sum += a[i][j] * a[i][j];
        }
    }
    printf("\nNorm: %f",sqrt(sum));

    return 0;
}

