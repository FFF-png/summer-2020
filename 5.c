//20.	Дано матрицю А розмірності nxп.
//Використовуючи вказівники, визначити середнє арифметичне додатніх чисел, середнє арифметичне від’ємних чисел та кількість нулів.
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
 

int main() {

    int n;
    printf("Enter size of matrix\t");
    scanf("%d", &n);
    printf("\nMatrix -\n");
    srand(time(NULL));

    float**  A = NULL;
    int i, j;

    A = (float**)malloc(n * sizeof(float*));
    if (A == NULL) {
        return 1;
    }
    else {
        for (i = 0; i < n; i++) {
            A[i] = (float*)malloc(n * sizeof(float));
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
        {
            A[i][j] = rand() % 20 - 5;
            printf("%f\t", A[i][j]);
        }  printf("\n");
    }


    float neg_avg = 0, pos_avg = 0;
    int zero = 0, pos = 0, neg = 0;

    float x = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((*(A + i))[j] < 0) 
            {
                x = (*(A + i))[j];
                neg_avg += x;
                neg++;
            }
            if ((*(A + i))[j] > 0)
            {
                x = (*(A + i))[j];
                pos_avg += x;
                pos++;
            }
            if ((*(A + i))[j] == 0) zero++;
        }
    }
    neg_avg /= neg;
    pos_avg /= pos;


    printf("\n arithmetic mean of positive numbers =%f", pos_avg);
    printf("\n arithmetic mean of negative numbers = %f", neg_avg);
    printf("\n number of zero = %d", zero);
    scanf("%d", &i);
    return 0;
}