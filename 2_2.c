//20. Об'єднати два упорядкованi за спаданням масиви F(9) та K(9) в один масив С(18), також упорядкований за спаданням.. 
//Вивести всі масиви.
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define N 9
int main(){

int F[N], K[N], i;
//enter
for (i = 0; i <= N-1; i++) {
    printf("Enter F%d -  ", i);
    scanf("%d", &F[i]);
}
for (i = 0; i <= N-1; i++) {
    printf("Enter K%d -  ", i);
    scanf("%d", &K[i]);
}
//виведення заданих масиів масивів
printf("\nF - ");

for(i=0; i<=N-1; i++){
    printf("\t%d", F[i]);
}
printf("\nK - ");

for(i=0; i<=N-1; i++){
    printf("\t%d", K[i]);
}

//C
int ki= 0, fi=0;
int C[N*2];

    for (i=0; i<N*2; i++){
        if(K[ki]>F[fi]){C[i]=K[ki]; ki++;}
        else {C[i]=F[fi]; fi++;}
    }

printf("\nC - ");

for(i=0; i<=N*2; i++){
    printf("\t%d", C[i]);
}
 printf("\n");

system("pause");
return 0;
}