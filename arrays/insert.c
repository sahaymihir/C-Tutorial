#include <stdio.h>

int main()
{
    int arr[100];
    int i, n, x, pos;
 
    printf("Enter the number of elements in the arr \n");
    scanf("%d", &n);
    printf("Enter the elements \n");
 
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("Input array elements are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the new element to be inserted: ");
    scanf("%d", &x);
    
    printf("Enter the position where element is to be inserted: ");
    scanf("%d", &pos);

    n++;
    for(i = n-1; i >= pos; i--)
        arr[i]=arr[i-1];
 
    arr[pos-1]=x; 

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}