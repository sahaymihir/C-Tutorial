#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,TM=0;
    printf("enter the marks of all subjects:");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    TM=a+b+c+d+e+f;
    printf("total marks are %d",TM);

    if(TM>=400)
    {
        if (TM>=540)
        {
            printf("100 % scholarship");
        }
        else if(TM>=480)
        {
            printf("50 % scholarship");
        }
        else if(TM>=400)
        {
            printf("20 % scholarship");
        }
    }
    else
    {
        printf("BHAG BSDK");
    }
    return 0;
}