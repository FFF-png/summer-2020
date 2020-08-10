#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[50];
    int i;
    printf("S = ");
    fgets(str, sizeof str, stdin);
    str[strlen(str) - 1] = 0;
    printf("the first way\n");
    for (i = 0; str[i] != ' '; i++);
    printf("\n len of surname = %d\n", i);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            i++;
            while (str[i] != ' ') {
                printf("%c", toupper(str[i]));
                i++;
            }
        }
    }
    printf("\n the second way\n");

    str[strlen(str) - 1] = 0;


    char *token = strtok(str, " ");
    i = 0;
    while (token != NULL) {
        if (i == 0) {
            printf("len of surname = %d\n", strlen(token));
        } else if (i == 1) {
            for (int j = 0; j < strlen(token); j++) {
                printf("%c", toupper(token[j]));
            }
            printf("\n");
        } else break;
    
        i++;
        token = strtok(NULL, " ");
    }

scanf("%d", &i);
    return 0;
}