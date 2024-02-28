#include <stdio.h>
#include <math.h>

int main()
{
    int arr[10],num;

    printf("Enter numbers: ");
    scanf("%d",&num);

    printf("Enter n numers \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The numbers are: \n");

    for (int i = 0; i < (num/2); i++)
    {
        int temp = arr[i];
        arr[i]= arr[num-1-i];
        arr[num-1-i] = temp; 
    }
    for (int i = 0; i < (num); i++)
    {
        printf("%d \t", arr[i]);
    }

    printf("\n");

    return 0;
}
