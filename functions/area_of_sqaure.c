#include <stdio.h>

float squarearea(float a);
float circlearea(float b);

int main () {
    float a;
    float b;
    printf("Enter side: ");
    scanf("%f", &a);
    printf("Enter radius: ");
    scanf("%f", &b);
    printf("Area square %.4f \n", squarearea(a));
    printf("Area circle %.4f \n", circlearea(b));

    return 0;
}

float squarearea(float a) {
    return a * a;
}

float circlearea(float b) {
    return 3.14 * b * b;
}



