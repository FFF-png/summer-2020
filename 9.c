#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buf[256], *s;
    const char *del = " ,.!?><;\t\r\n";

    printf("s = ");
    fgets(buf, sizeof buf, stdin);
    buf[strlen(buf) - 1] = 0;

    s = malloc(strlen(buf) + 1);
    strcpy(s, buf);

    char *token = strtok(s, del);
    int count = 0;
    while (token != NULL) {
        if (strlen(token) > 7) {
            count++;
        }
        token = strtok(NULL, del);
    }

    printf("count = %d\n", count);

    free(s);

    system("pause");

    return 0;
}