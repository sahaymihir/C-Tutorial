#include <stdio.h>
#include <math.h>

int main () {
    int (*p)[100],n,m;

    printf("Enter no of rows and column: ");
    scanf("%d %d",&m,&n);

    printf("Enter elements: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            scanf("%d",((*p+i) +j ));
        }
    }

    printf("The array is \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            printf("%d \t",*((*p+i) +j ));
        }
        printf("\n");
    }


    return 0;
}