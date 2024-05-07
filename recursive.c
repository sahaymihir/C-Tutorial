#include <stdio.h>
#include <math.h>

void sort(int a[100],int n) {
    int min = 0;
    if (n == 1) {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i] < a[min]) {
            min = i;
        }
    }
    
} 

int main () {
    int a[100],n;

    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    return 0;
}