#include <stdio.h>

void hello();
void bye();

int main () {
    hello();
    bye();
    return 0;
}

void hello() {
    printf("Hello \n");
}

void bye() {
    printf("goodbye \n");
}