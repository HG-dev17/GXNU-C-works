#include <stdio.h>
/*
有一个函数，x∈Z ：
     8x + 1   （ x ＜ 1 )
y =  4x + 5   （ 1 ≤ x ＜  8 )
     2x + 21     ( x ≥ 8 ) 

输入x的值，输出y的值。
输入示例：
3
输出示例：
17
*/
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