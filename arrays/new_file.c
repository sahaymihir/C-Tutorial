#include <stdio.h>
#include <math.h>

int main () {
    int sq[10][10],i,j,row,col,rowsum[10],col[10];
    int pd = 0,sd =0,k,x=0,b[100];
    printf("Enter rows and column: ");
    scanf("%d %d",&row &col);

    printf("Enter elements: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; i < col; j++)
        {
            scanf("%d",&sq[i][j]);
        }
        
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; i < col; j++)
        {
            b[x++] =sq[i][j]);
        }
        
    }


    
    scanf("%d",&num);

    return 0;
}