# include<stdio.h>
# include<math.h>

int main () {

    float radius;

    printf("Enter the radius of sphere \n");
    scanf("%f", &radius);
    printf("The volume of sphere is %f \n", 4.0/3.0 * 3.14 * pow(radius, 3)); // Use 3.0 instead to 3 to get accurate solution
    return 0;
}