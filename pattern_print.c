#include <stdio.h>

int main () {
    int a;
    printf("Enter the number of rows: ");
    scanf("%d",&a);

    for (int i = 1; i <= a;i++) {
        for (int j = 0;j <= i -1 ;j++)
        {
            printf("* \t");
        }

        printf("\n");
    }

}