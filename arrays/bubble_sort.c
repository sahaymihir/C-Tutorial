#include <stdio.h>
#include <math.h>

int main () {
    int a[100],n,temp;

    printf("Enter no of elements: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \t",a[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
    }

    printf("\nThe sorted array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \t",a[i]);
    }
    return 0;
}