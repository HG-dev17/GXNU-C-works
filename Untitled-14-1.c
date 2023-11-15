#include <stdio.h>
/*
求 1!+2!+3!+...+10!
提示 ： 为避免结果出错  请直接拷贝输出示例修改后 作为printf格式字符串使用 ，其中xxxxxx请用正确结果替换。
输入示例：
输出示例：
1!+2!+3!+...+10!=xxxxxx
*/
int main(){
    int x,y,sum,n;
    sum=0,n=0;
    for(n=1;n<=10;n++){
        y=1;
        for(x=1;x<=n;x++){
            y=y*x;
        }
        sum=sum+y;
    }
    printf("1!+2!+3!+...+10!=%d",sum);
    return 0;
}