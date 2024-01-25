#include <stdio.h>

void indian();
void french();

int main () {
    int a;
    printf("Are you a indian or french(Type 1 for indian and 0 for for french): ");
    scanf("%d", &a);
    if (a == 1) {
        indian();
    } else if (a == 0) {
        french();
    } else {
        printf("Enter 1 or 0 \n");
    }
    return 0;
}

void indian () {
    printf("Namaste \n");
}

void french () {
    printf("Bonjour \n");
}