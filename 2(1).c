// Знайти мінімальний елемент заданого масиву P(10) і поміняти його місцями 
//з першим елементом. Вивести мінімальний елемент, початковий та перетворений масиви.

#include<stdlib.h>
#include<stdio.h>
#define N 10 
int main(){
//RANDOM
srand(time(NULL));
int P[N],i;
for (i = 0; i <= N; i++) {
    P[i] = rand();
    printf('%d/t', P[i]);
}
printf('/n');
//min 
int min = P[1];
int imin = 0;
for(i=0; i<N; i++){
    if( min> P[i]){ min = P[i]; imin = 1;}
    }
    printf('min = %d/n', min);
//Replace
int x = P[1];
P[1] = min;
P[imin] = x;



for (i=0; i <= N; i++){
 printf('%d/t', P[i]);
}
return 0;
}