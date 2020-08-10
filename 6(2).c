//Ввести прізвище, ім’я та по батькові як одне дане типу рядок.
//Визначити довжину рядка і кількість букв «а» у ньому. Виконати додатково завдання свого варіанта двома способами: 
//а) розглядаючи рядок як масив символів; 
//б) застосовуючи до рядка стандартні функції.
//20.	Вивести спочатку ім’я, потім прізвище все великими літерами.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

    char str[256];

    int i;
    printf("S = ");
    fgets(str, sizeof str, stdin);
    str[strlen(str) - 1] = 0;

for (i = 0; str[i] != ' '; i++);
    printf("\n len = %d\n", i);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            i++;
            while (str[i] != ' ') {
                printf("%c", toupper(str[i]));
                i++;
            }
        }
    }
    printf("\n");
printf("len of str = %d\n", strlen(str));



    char *token = strtok(str, " ");
    i = 0;
    while (token != NULL) {
        if (i == 0) {
            printf("len = %d\n", strlen(token));
        } else if (i == 1) {
            for (int j = 0; j < strlen(token); j++) {
                printf("%c", toupper(token[j]));
            }
            printf("\n");
        } else break;
    
        i++;
        token = strtok(NULL, " ");
    }
}