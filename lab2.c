#include <stdio.h>
#include <math.h>

int prfectsquare(int a[100][100],int m,int n) {
    static int sum = 0;
    int num,p1, b[100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 2 == 0) {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
            
        }
        
    }

    return sum; 
}

int main () {
    int a[100][100],m,n;

    printf("Enter the number of rows and column: ");
    scanf("%d %d",&m,&n);

    printf("Enter the elements: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("The Given Matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    prfectsquare(a,m,n);

    printf("\nThe new Matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}