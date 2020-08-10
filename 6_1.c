#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define k 6
#define n 5


int main(){
     int A[k-1][n-1];
     int i =0, j=0;

 srand(time(NULL));

printf("\t|1|\t|2|\t|3|\t|4|\t|5|\n");

for ( i = 0; i < k; i++){
    printf("|%d|\t", i+1);
        for ( j = 0; j < n; j++)
            {
                A[i][j] = rand() %250;
                printf ("%d\t",A[i][j]);
          }  printf("\n");}


int citi[k-1]; 
int number, sum = 0;
    printf("Enter your number");
    scanf("%d", &number);

printf( " > %d in  ", number);

for ( i = 0; i < k; i++){
    for ( j = 0; j < n; j++){
        sum+= A[i][j];
    }
    if (A[i][j] < number){
            citi[i] = sum;
            printf("%d", i+1);
        }
        sum = 0;
}




    scanf("%d", &i);
system("pause"); 
    return 0;
}