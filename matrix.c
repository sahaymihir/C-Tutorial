#include <stdio.h>
#include <math.h>

int isSaddle(int a[100][100], int n) {
    for (int i = 0; i < n; i++) {
        int min = a[i][0], min_index = 0;
        for (int j = 1; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                min_index = j;
            }
        }

        int k;
        for (k = 0; k < n; k++) {
            if (a[k][min_index] > min)
                break;
        }

        if (k == n)
            return min;
    }

    return -1; // return -1 if no saddle point is found
}

int main () {
    int a[100][100],n;

    printf("Enter no of rows and column: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The array is \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe saddle point is %d", isSaddle(a,n));

    return 0;
}