#include<stdio.h>

int main () {
    float marks;
    printf("Enter your marks :");
    scanf("%f", &marks);
    if (marks > 90 && marks <= 100) {
        printf("You got A+ grade \n");
    }
    else if (marks > 80 && marks <= 90) {
        printf("You got A grade \n");
    }
    else if (marks > 70 && marks <= 80) {
        printf("You got B grade \n");
    }
    else if (marks > 60 && marks <= 70) {
        printf("You got C grade \n");
    }
    else if (marks > 50 && marks <= 60) {
        printf("You got D grade \n");
    }
    else if (marks > 40 && marks <= 50) {
        printf("You got E grade \n");
    }
    else if (marks >= 0 && marks <= 40) {
        printf("You got F grade \n");
    }
    else {
        printf("Please enter valid marks \n");
    }

}