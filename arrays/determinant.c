#include <stdio.h>
#include <math.h>

int main () {
    int a[100][100],n,m;

    printf("Enter no of rows and column: ");
    scanf("%d %d",&m,&n);

    printf("Enter elements: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The array is \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    printf("The determinant of the matrix is: ");

    for (int i = 0;;) 
    {
        for (int j = 0; j < n; j++)
        {
            d = (a[i][j]) * ()
        }
        
    }
    

    return 0;
}