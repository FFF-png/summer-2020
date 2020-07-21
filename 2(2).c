//20. Об'єднати два упорядкованi за спаданням масиви F(9) та K(9) в один масив С(18), також упорядкований за спаданням.. 
//Вивести всі масиви.
#include <stdlib.h>
#include <stdio.h>

int main(){

int F[] = {0, 1,2,3,4,5,6,7,8};
int K[] = {9,10,12,13,16,22,33,44,55};
int ki= 0, fi=0,ci=0;
int C[18];
    for(ci= 0; ci<= 18; ci++){
        if(F[fi]>= K[ki]){ fi++; C[ci] = F[fi];}
        else{ ki++; C[ci] = K[ki];}
    }

 printf(' F - ');
 for (int fi=0; fi<= 9; fi++){
     printf('%d/t', F[fi]);
     
 }
 printf('/n');
printf(' K - ');
 for (int i=0; i<= 9; i++){
     printf('%d/t', K[i]);
     
 }
  printf('/n');
printf(' C - ');
 for (int i=0; i<= 18; i++){
     printf('%d/t', C[i]);
 }

return 0;
}