#include <stdio.h>
#include <math.h>
#include <string.h>

void capital(char a[])
{
    if (a[0] >= 'a' && a[0] <= 'z')
    {
        a[0] -= 32;
    }
}

void array_sorting(char a[][100], int m) {
    char temp[100];
    for (int i = 0; i < m ; i++) {
        for (int j = 0; j < m-1-i; j++) {
            if (strcmp(a[j], a[j+1]) > 0) {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j+1]);
                strcpy(a[j+1], temp);
            }
        }
    }
}

void sorting (char a[]) {
    char temp;

    for (int i = 0;i < strlen(a);i++) {
        for (int j = 0; j < strlen(a) - 1 - i; j++)
        {
            if (a[j] < a[j +1]) {
                temp = a [j];
                a[j] = a[j+1];
                a[j+1] =temp;
            }
        }
        
    }

}

int main()
{
    char a[100][100];
    int m;

    printf("Enter the number of strings: ");
    scanf("%d", &m);
    getchar();

    printf("Enter the elements: ");
    for (int i = 0; i < m; i++)
    {
        fgets(a[i], sizeof(a[i]), stdin);
    }

    for (int i = 0; i < m; i++)
    {
        capital(a[i]);
    }

    // for (int i = 0; i < m; i++)
    // {
    //     sorting(a[i]);
    // }

    array_sorting(a,m);

    printf("The strings are: \n");
    for (int i = 0; i <= m; i++)
    {
        fputs(a[i], stdout);
    }

    return 0;
}