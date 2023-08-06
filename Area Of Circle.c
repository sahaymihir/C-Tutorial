# include<stdio.h>

int main () {
    float radius;
    printf("Enter Radius of Circle \n");
    scanf("%f", &radius);
    printf("The Area Of Circle is %f \n", 3.14 * radius * radius);
    printf("The Circumference of Circle is %f  \n", 2*3.14*radius);
    return 0;
}