
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
printf("Enter the coordinates/n");
int x,y;
scanf('%d%d', &x, &y);
    //1. y!<0
    if (y<0){ printf('/ndoes not belong');}
    else {
    //2. L!>4
        int l;
        l=sqrt((x*x)+(y*y));
        if (l>4) { printf('/ndoes not belong');}
        else{
    //l!<2, x<0
            if(x<0){printf('/nbelong')}
            else{
                if(l<2){printf('/ndoes not belong');}
                else{printf('belon');}
            }
        }
   }
return 0;
}