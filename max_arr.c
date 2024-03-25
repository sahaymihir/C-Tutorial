#include <stdio.h>

int main () {
    int a,b,c;

    int a[10] = {2,3,4,5,6};
    int max = a[0] * a[1];
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)

            if (max < a[i] * a[j]) {
                max = a[i] * a[j]
            }
        }
        
    }
    



    return 0;
}