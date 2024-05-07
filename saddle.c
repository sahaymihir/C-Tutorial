#include <stdio.h>
#include <math.h>

void rowMin_Max(int a[100][100],int n,int min[100],int max[100]) {
    for (int i = 0; i < n; i++)
    {
        min[0+i] = a[i][0];
        max[0+i] = a[i][0];
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max[i]) {
                max[i] = a[i][j];
            } else if (a[i][j] < min[i]) {
                min[i] = a[i][j];
            }
        }
    }
}


int main () {
    int a[100][100],n,min[100],max[100];

    printf("Enter no of rows and column: (MxM)");
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
    rowMin_Max(a,n,min,max);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nThe minimum in %d row is %d",i+1,min[i]);
        printf("\nThe minimum in %d row is %d",i+1,max[i]);
    }

    return 0;
}