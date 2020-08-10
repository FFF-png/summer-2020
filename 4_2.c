//20. Дано цілочислову матрицю А розмірності nxn.
//Визначити суму елементів тих стовпців, які не містять від’ємних значень.
//Знайти мінімум серед сум модулів елементів діагоналей, які паралельні бічній діагоналі матриці. 

#include<stdlib.h>
#include<stdio.h>
#include<time.h>


int main(){
    
    int N;
    printf("Enter the size of array  - ");
    scanf("%d", &N);
    printf("\n Matrix:\n");
    srand(time(NULL));

int A[N][N], z = 0, i = 0, j = 0;
//
 for ( i = 0; i < N; i++){
        for ( j = 0; j < N; j++)
            {
                A[i][j] = rand() %20 - 5;
                printf ("%d\t",A[i][j]);
          }  printf("\n");}


int sum = 0, sumTmp= 0, minTmp= 0, minUp=100, minLow = 100;


for (i = 0; i<=N-1; i++){
    for(j=0; j<=N-1; j++){
        if(A[j][i]<0) 
            {sumTmp = 0;
            break;} 
        else  
            sumTmp += A[j][i];
    } 
    sum += sumTmp;
    sumTmp =0;
}

printf("\nSum  = %d", sum);


int min, sumd[2*N-2], sumdi=0; 
 z = 0;
 i = 0;
 j = 0;
int x = 0;

    for (z; z < N; z++)
{       j = z;
        for (i = 0; i < z + 1; i++)
{ 
            
            for (j; j >= 0; j--)
{
                x = abs(A[i][j]);
                minTmp += x;
                j--;
                break;
}
}
if(minTmp < minUp)
minUp = minTmp;
minTmp = 0;
}



    for (z = N-1; z > 0; z--)
{
         j = z;
        for (i = N-1; i > 0; i--)
{
           
            for (j; j < N; j++)
{
        minTmp += abs(A[i][j]);
        j--;
        break;
}
}
            if(minTmp < minLow)
            minLow = minTmp;
            minTmp = 0;
}


if(minUp < minLow)
min = minUp;
else
min = minLow;
 
 printf("\nmin = %d", min);
 scanf("%d", &i);
    return 0;
}