//В кожному стовпчику заданої матриці U(3,7) поміняти місцями перший та максимальний елементи.
// Вивести вихідну та перетворену матриці.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
  srand(time(NULL));
    int i,j;
    int U[3][7]; 

 printf(" First matrix - \n");
 for ( i = 0; i < 3; i++){
        for ( j = 0; j < 7; j++)
            {
                U[i][j] = rand() %20;
                printf ("%d\t",U[i][j]);
          }  printf("\n");}



    int max = U[0][0];
    int k, ki,kj;



    //Заміни місцями, якщо виводить по радках//
 

    for (j=0; j< 7; j++){
        for(i=0; i< 3; i++){
          if (max<U[i][j]){ max= U[i][j]; ki=i; kj =j;}
            }
          k = U[0][j];
        U[0][j] = max; U[ki][kj] = k;
        max = U[0][j+1];
        }

printf("Final matrix - \n");


for ( i = 0; i < 3; i++){
        for ( j = 0; j < 7; j++)
            {printf ("%d\t",U[i][j]);
          }  printf("\n");}
scanf("%d", &i);

system("pause");
return 0;
}