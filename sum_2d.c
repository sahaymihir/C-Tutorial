#include <stdio.h>
#include <math.h>
int sum_mat(int a[100][100],int m,int n) {
    static int i = 0,sum =0;

    if (i > (m*n)) {
        return 0;
    } else {
        sum += 
    }
}
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

    return 0;
}