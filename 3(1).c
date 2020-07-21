//В заданій матриці A(6,4) знайти значення найбільшого за модулем елемента матриці, 
//а також індекси елемента із знайденим значенням модуля. Вивести вихідну матрицю, 
//найбільший за модулем елемент та індекси цього елемента.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  srand(time(NULL));
int A[6][4];
int i,j;
for (i = 0; i <= 6; i++) {
    for (j=0; j<=4; j++) {
      P[i][j] = rand();
      printf('%d/t', P[i][j]); 
    } printf('/n');}
    int max = P[1][1];
    int x,y;
for (i = 0; i <= 6; i++) {
    for (j=0; j<=4; j++) {
     if(max< abs(P[i][j])){
       max = abs(P[i][j]);
       x = i; y = j;
     }}}

     printf('max = %d.[%d][%d]', max, x,y );
    return 0;
}