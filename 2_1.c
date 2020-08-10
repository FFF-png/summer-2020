#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define N 10
int main(){
//


int P[N],i;

for (i = 0; i <= N-1; i++) {
    printf("Enter P%d -  ", i);
    scanf("%d", &P[i]);
    printf("\t", P[i]);
}
printf("\n");
//min 
int min = P[1];
int imin = 0;
for(i=0; i<= N-1; i++){
    if( min> P[i]){ min = P[i]; imin = i;}
    }
    printf("min = %d\n", min);
//Replace

P[imin] = P[0];
P[0] = min;


for (i=0; i <=N-1; i++){
 printf("%d\t", P[i]);
}
system("pause");
return 0;
}