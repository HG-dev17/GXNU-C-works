#include <stdio.h>
/*
输入2个正整数，输出其最大公约数和最小公倍数。
提示：可使用最大公约数的定义求最大公约数，而最小公倍数为两数积除以最大公约数
输入示例：
12 15
输出示例：
3 60
*/
int main() {
    int r,n,m,t,p;
    scanf("%d %d",&m,&n);
    p=n*m;
    do{
        r=n%m;
        n=m;
        m=r;
    }
    while(m != 0);
    printf("%d %d",n,p/n);
}