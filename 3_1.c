//В заданій матриці A(6,4) знайти значення найбільшого за модулем елемента матриці, 
//а також індекси елемента із знайденим значенням модуля. Вивести вихідну матрицю, 
//найбільший за модулем елемент та індекси цього елемента.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(){

  srand(time(NULL));
int A[6][4];
int i,j;
//Рандомна матриця
for ( i = 0; i < 6; i++){
        for ( j = 0; j < 4; j++)
            {
                A[i][j] = rand() %20;
                printf ("%d\t",A[i][j]);
          }  printf("\n");}



    int max;
    max= A[0][0];
    int x,y;

  

for (i = 0; i < 6; i++) {
    for (j=0; j< 4; j++) {
     if(max<= abs(A[i][j])){
       max = abs(A[i][j]);
       x = i; y = j;
     }}}

  printf("\nmax - %d", max);
  printf("\nx - %d, y - %d", x,y);
  scanf("%d", &i);
  
   
    return 0;
}