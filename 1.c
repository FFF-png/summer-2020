
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
printf("Enter the coordinates\n");
float x,y;
scanf("%f%f", &x, &y);
    //1. y!<0
    if (y<0){ printf("\ndoes not belong\n");}
    else {
    //2. L!>4
        int l;
        l=sqrt((x*x)+(y*y));
        if (l>4) { printf("\ndoes not belong\n");}
        else{
    //l!<2, x<0
            if(x<0){printf("\nbelong\n");}
            else{
                if(l<2){printf("\ndoes not belong\n");}
                else{printf("\nbelon\n");}
            }
        }
   }
   system("pause");
return 0;
}