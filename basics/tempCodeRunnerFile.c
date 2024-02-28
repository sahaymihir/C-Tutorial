#include <stdio.h>
#include <math.h>

int main()
{
    int arr[10],n;

    printf("Enter numbers: ");
    scanf("%d",&n);

    printf("Enter n numers \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The numbers are: \n");
    for (int i = n - 1; i <= 0; i--)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    return 0;
}
