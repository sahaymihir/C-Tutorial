#include <stdio.h>
#include <math.h>

void colsum(int a[100][100], int b[4]) {
    int carry = 0;
    for (int j = 4; j > 0; j--) {
        int sum = carry;
        for (int i = 0; i < 3; i++) {
            sum += a[i][j];
        }
        carry = sum / 10;
        b[j] = sum % 10;
    }
    if (carry >=10){
        b[0] = carry/10;
    }
}

int main () {
    int a[100][100],b[100];

    printf("Enter elements: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    colsum(a,b);

    printf("The array is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++) {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    printf("The array is \n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d \t",b[i]);
    }
    
    
    return 0;
}