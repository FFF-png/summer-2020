//В кожному стовпчику заданої матриці U(3,7) поміняти місцями перший та максимальний елементи.
// Вивести вихідну та перетворену матриці.
#include<stdio.h>
#include<stdlib.h>

int main(){
  srand(time(NULL));
    int i,j;
    int U[3][7]; 
    for (i = 0; i <= 2; i++) {
    for (j=0; j<=6; j++) {
      U[i][j] = rand();
      printf('%d/t', P[i][j]); 
    }printf('/n');}
    int max = U[0][0];
    //Заміни місцями, якщо виводить по радках//
    for (i=0; i<=2; i++){
        for(j=0; j<=6; j++){
          if (max<U[i][j]){ max= U[i][j];}
            }
        U[0][j] = max; max=U[0][j+1]; 
        }
for (i=0; i=2; i++){
  for(j=0;j=6; j++){
    printf('%d/t', U[i][j])
  }
  printf('/n');
}

return 0;
}