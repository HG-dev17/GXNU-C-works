#include <stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);
    if(x<1){
       y=8*x+1;
    }
    if(x>=1 && x<8){
       y=4*x+5;
    }
    if(x>=8){
       y=2*x+21;
    }
    printf("%d",y);
    return 0;
}