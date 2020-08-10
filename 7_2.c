#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 20.    Визначити індекси максимального та мінімального елементів масиву. Обчислити їхній добуток.

int main() {
    int *a, n;

    srand(time(NULL));

    printf("n = ");
    scanf("%d", &n);

    a = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 200 - 100;
        printf("%d\t", a[i]);
    }
    printf("\n");

    int min, max, indexMin, indexMax;
    min = max = a[0];
    indexMin = indexMax = 0;

    for (int i = 0; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
            indexMin = i;
        }
        if (max < a[i]) {
            max = a[i];
            indexMax = i;
        }
    }

    printf("result = %d\n", indexMin * indexMax);

    system("pause");
    return 0;
}