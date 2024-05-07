#include <stdio.h>

void swap(int *x, int *y)

{
    int t = *x;

    *x = *y;

    *y = t;
}

int main()

{            
    int a = 5,b = 7;
    int *x,*y;
    x = &a;
    y = &b;

    swap(x, y);

    printf("\nAfter swap: a= %d and b= %d", *x, *y);

return 0;
}
