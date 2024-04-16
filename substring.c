#include <stdio.h>
#include <string.h>

int main() {
    char str[100], words[100][100], temp[100];
    int i = 0, j = 0, k = 0, count[100] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (k = 0; k < strlen(str); k++) {
        if (str[k] != ' ' && str[k] != '\0') {
            temp[j++] = str[k];
        } else {
            temp[j] = '\0';
            for (i = 0; i < k; i++) {
                if (strcmp(words[i], temp) == 0) {
                    count[i]++;
                    break;
                }
            }
            if (i == k) {
                strcpy(words[i], temp);
                count[i]++;
            }
            j = 0;
        }
    }

    printf("Frequency of repeated words:\n");
    for (i = 0; i < k; i++) {
        if (count[i] > 1) {
            printf("%s appears %d times\n", words[i], count[i]);
        }
    }

    printf("\nModified string:\n");
    for (i = 0; i < k; i++) {
        if (count[i] == 1) {
            printf("%s ", words[i]);
        }
    }
    printf("\n");

    return 0;
}