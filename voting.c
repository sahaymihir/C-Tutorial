#include<stdio.h>

int main () {
    int age;
    printf("Enter your age : \n");
    scanf("%d", &age);
    if (age >= 18) {
    printf("Congrats! You are eligible to vote \n");
    }
    else{
        printf("You are not eligible to vote \n");
    }
}