#include <stdio.h>
#include <math.h>

int main () {
    
    // Initialising and priting a 2D matrix
    int a[100][100],b[100],n,m,x,count = 0,pcount = 0;

    printf("Enter no of rows and column: ");
    scanf("%d %d",&m,&n);

    printf("Enter elements: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The matrix is \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    // Collect all elements in a 1D elements
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            b[x++] =a[i][j];
        }
    }

    // Count the number of zeros and non zero elements
    for (int i = 0; i < x; i++)
    {
        if (b[i] == 0) {
            count++;
        } else {
            pcount++;
        } 
    }   

    // Check for sparse matrix
    if (count > pcount) {
        printf("This matrix is a sparse matrix");
    } else {
        printf("This matrix is not a sparse matrix");
    }

    printf("\n");
    
    return 0;
}