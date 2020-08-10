#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 20.    Обчислити суму кубів усіх від’ємних значень елементів масиву та їхню кількість та знайти суму додатних елементів.

int main() {
    int *a, n;

    printf("n = ");
    scanf("%d", &n);

    a = malloc(n * sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 20 - 10;
        printf("%d\t", a[i]);
    }
    printf("\n");

    int neg = 0, sumPos = 0, sumCub = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            neg++;
            sumCub += a[i] * a[i] * a[i];
        }
        if (a[i] > 0) {
            sumPos += a[i];
        }
    }

    printf("neg = %d\nsum pos = %d\nsum cub = %d\n", neg, sumPos, sumCub);

    system("pause");
    return 0;
}