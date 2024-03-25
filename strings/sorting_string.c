#include<stdio.h>
#include<string.h>

int main()
{
    const int MAX = 30;
    char string[MAX][MAX],temp[30];
    int n,j,i;

    printf("Enter no of strings: ");
    scanf("%d",&n);

    printf("\nEnter the strings: ");

    for ( i = 0; i < n; i++)
    {
        gets(string);
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = i+1; i < n; j++)
        {
            if (strcmp(string[i],string[j])> 0) {
                strcpy(temp,string[i]);
                strcpy(string[i],string[j]);
                strcpy(string[i],temp);
            }
        }
        
    }

    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
    {
        puts(string[i]);
    }

    return 0;
}
 

 // WAP to retrieve first word frim a sentence
 // WAP to remove blank space from string
 // WAP to count the number of vowels and cononants in a given string
 // WAP deleteing repeated words in a given string