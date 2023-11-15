#include <stdio.h>
/*
输出500以内所有的素数，各数之间用空格间隔
输入示例：
输出示例：
2 3 5 7 11 13 17 19 23 ......
*/
int main(){
    int i,j;
    for(i=2;i<=500;i++){
        for(j=2;j<=i;j++){//内嵌套算素数
            if(i%j==0){
                break;
            }
            
        }
        if(j==i){
                printf("%d ",i);
        }
    }
    return 0;
}