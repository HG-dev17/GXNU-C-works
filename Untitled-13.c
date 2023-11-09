#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=i;j++){//左三角
            printf("%d*%d=%2d ",i,j,i*j);   
        }
        printf("\n");
    }
    return 0;
}