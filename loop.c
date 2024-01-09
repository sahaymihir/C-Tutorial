#include <stdio.h>

int main (){
    int i,m;
    printf("The number of times you want to write hello world: ");
    scanf("%d", &i);
    for (m = 1;m <= i;m += 1)  {
    printf("Hello world \n");
    }
}