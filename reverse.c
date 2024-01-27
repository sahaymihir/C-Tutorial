#include <stdio.h>

int main()
{
    int n, reverse = 0, temp, orignal;

    printf("Enter a number: ");
    scanf("%d", &n);

    orignal = n;

    while (n != 0)
    {
        temp = n % 10;
        reverse = reverse * 10 + temp;
        n /= 10;
    }

    printf("The reverse of number is %d \n", reverse);

    if (orignal == reverse)
    {
        printf("The number is palindrome \n");
    }

    return 0;
}
