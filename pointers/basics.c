#include<stdio.h>
#include<math.h>

int main () {
    int *ptr,n,a[100];
    ptr = a;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",*(ptr+i));
    }

    return 0;
}