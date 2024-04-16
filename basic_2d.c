#include <stdio.h>

int add(int a[100][100],int m,int n) {
    static int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
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

    printf("\nThe sum of elements of given Matrix is: %d\n",add(a,m,n));
    return 0;
    
}