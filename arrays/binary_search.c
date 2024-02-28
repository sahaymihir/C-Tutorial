#include <stdio.h>
#include <math.h>

int main()
{
    int arr[100] = {10, 20, 30, 40, 50}, num, first = 0 , last = 4,mid;

    printf("Enter a element to search for: ");
    scanf("%d", &num);

    do
    {
        mid = (first + last) / 2;

        if (arr[mid] > num)
        {
            last = mid - 1;
        }
        else if (arr[mid] < num)
        {
            first = mid + 1;
        }
    } while (arr[mid] != num && first <= last);

    if (arr[mid] == num)
    {
        printf("%d found \n", num);
    }
    else
    {
        printf("%d not found \n", num);
    }
    return 0;
}