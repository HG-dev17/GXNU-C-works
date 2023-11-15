#include <stdio.h>
/*
输入3个不同的整数，输出其中最小的一个。
输入示例：
3 4 5
输出示例：
3
*/
int main(){
    int a,b,c,X;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        if(a<c){
            X=a;
        }
    }
    if(b<a){
        if(b<c){
            X=b;
        }
    }
    if(c<a){
        if(c<b){
            X=c;
        }
    }
    printf("%d",X);
    return 0;
}