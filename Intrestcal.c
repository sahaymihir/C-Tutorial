# include<stdio.h>
# include<math.h>  //<math.h> is required for the pow() function

int main() {
    float p;
    float rate;
    float years;

    printf("Enter The Principle Amount \n");
    scanf("%f", &p);
    printf("Enter The Rate of Intrest \n");
    scanf("%f", &rate);
    printf("Enter The Time Period in Years \n");
    scanf("%f", &years);
    printf("The Simple Intrest for the given data is %f \n", (p*rate*years)/100);
    printf("The Compound Intrest for the given data is %f \n", p*pow((1+rate/100),years) -p);

    return 0;
}