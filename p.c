#include <stdio.h>

int main () {
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("This character is in upper case \n");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("This character is in lower case \n");
    }
    else {
        printf("Not english \n");
    }
    return 0;
}