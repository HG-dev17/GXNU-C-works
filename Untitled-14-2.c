#include <stdio.h>
/*
求 1!+2!+3!+...+10!
提示 ： 为避免结果出错  请直接拷贝输出示例修改后 作为printf格式字符串使用 ，其中xxxxxx请用正确结果替换。
输入示例：
输出示例：
1!+2!+3!+...+10!=xxxxxx
*/
int main(){
    int x,y,n,sum;
    sum=1,n=0;
    for(x=1;x<=10;x++){
        sum=sum*x;
        n=n+sum;
    }
    printf("1!+2!+3!+...+10!=%d",n);
    return 0;
}