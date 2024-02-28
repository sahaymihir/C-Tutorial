#include <stdio.h>
#include <math.h>

int main()
{
    int arr[100], num, largest = 0, smallest;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for (int i = 0; i < num; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        else
        {
            smallest = arr[i];
        }
    }

    printf("The largest element is %d \n", largest);
    printf("The smallest element is %d \n", smallest);

    return 0;
}
