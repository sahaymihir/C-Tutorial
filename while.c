/* #include <stdio.h>

int main()
{
    int i = 0, sum = 0;

    while (i <= 100)
    {
        sum += i;
        i++;
    }

    printf("The sum is %d \n", sum);
    return 0;
} */

#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) 
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d \n", reversed);

    return 0;
}