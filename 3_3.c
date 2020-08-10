//Серед елементів, розташованих вище побічної діагоналі і на ній у матриці L(7,7),
//переписати елементи, розташовані  по периметру   вказаної частини в одновимірний масив.
//Вивести вихідну матрицю та сформований одновимірний масив.
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
    srand(time(NULL));

    int i,j, L[7][7];

 for ( i = 0; i < 7; i++){
        for ( j = 0; j <= 6; j++)
            {
                L[i][j] = rand() %20;
                printf ("%d\t",L[i][j]);
          }  printf("\n");}

    int M[21], mi=0;
    printf("\nArray - ");

    //перший ряд.
  for (j= 0; j< 7; j++){
        M[mi] = L[0][j];
        printf("%d\t", M[mi]); mi++;
    }

    //діагональ.
  int jojo =5;

    for( i=1; i<= 6; i++){
        for (jojo; jojo>= 0;){
            M[mi] = L[i][jojo]; 
            printf("%d\t", M[mi]);
            jojo--; 
            mi++;
             break;
        }
    } 
    

    //перший стовпчик
   for (i=5; i>= 1; i--){
        M[mi] = L[i][0];
        printf("%d\t", M[mi]); mi++;
    }


   scanf("%d", &i);
    return 0;
    
}