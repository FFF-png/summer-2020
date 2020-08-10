#include <stdio.h>
#include <stdlib.h>

int POW(int x, int n) {
    if (n == 0) return 1;
    return x * POW(x, n - 1);
}

int main() {

    printf("%d\n", POW(5, 3));

    system("pause");
    return 0;
}