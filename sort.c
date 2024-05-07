#include <stdio.h>
#include <math.h>

int sortR(int list[100], int n)
{
    int i, tmp, min = 0;

    if (n == 1)
    {
        return 0;
    }

    for (i = 1; i < n; i++)
    {
        if (list[i] < list[min])
        {
            min = i;
        }

        tmp = list[0];
        list[0] = list[min];
        list[min] = tmp;

    }

    return sortR(&list[1], n - 1);
}

int main()
{
    int n,a[100];

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    sortR(a,n);

    for (int i = 0; i < n; i++)
    {
        printf("%d \t",a[i]);
    }

    return 0;
}
