#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, min;

    printf("Program to find smallest number \n");

    printf("Enter a,b,c ");
    scanf("%d %d %d", &a,&b,&c);

    min = (((a < b) ? a : b) < c) ? ((a < b) ? a : b) : c;

    printf("This smallest number is %d \n",min);
    //(min == a) ? (printf("A is the smallest number \n")) : (((min == b))?printf("B is the smallest number \n"): printf("C is the smallest number \n"));

    return 0;
}