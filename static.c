#include <stdio.h>
#include <math.h>

void fn() {
    static int x = 0;
    x = x + 1;
    //x = 1
    printf("%d", x);
}

int main () {

    for (int i = 0; i < 3; i++)
    {
        fn();
        printf("\n");
    }

    return 0;
}