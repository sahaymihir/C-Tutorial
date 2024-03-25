#include <stdio.h>

int main () {
    int a,b,c;

    printf("Enter a b c");
    scanf("%d %d %d",&a,&b,&c);

    for(int i = 0;((a > b && a > c)&& i <=0);i++) {
        printf("A is largest");
    }
    
    for(int i = 0;((b > a && b > c) && i <=0);i++) {
         printf("B is largest");
    }

    for(int i = 0;((c > b && c > a) && i <= 0);i++) {
         printf("C is largest");
    }

    return 0;
}