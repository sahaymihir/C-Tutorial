#include <stdio.h>
#include <math.h>
#include <string.h>

void sort(char a[100]) {
    int n = strlen(a);
    char tmp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (a[j] < a[i]) {
                tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
        
    }
    
}
int main () {
    int num;
    char a[100];

    fgets(a,100,stdin);
    sort(a);
    printf("The sorted string is ");
    puts(a);

    return 0;
}