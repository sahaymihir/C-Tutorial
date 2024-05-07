#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
    int num;
    char *p;
    printf("Enter a name: ");
    fgets(p,100,stdin);
    puts(p);

    printf("\nThe length of this string is %d",strlen(p) - 1);
    return 0;
}