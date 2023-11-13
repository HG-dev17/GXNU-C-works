#include <stdio.h>
/*
求 1!+2!+3!+...+10!
提示 ： 为避免结果出错  请直接拷贝输出示例修改后 作为printf格式字符串使用 ，其中xxxxxx请用正确结果替换。
输入示例：
输出示例：
1!+2!+3!+...+10!=xxxxxx
*/
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int i, sum = 0;
    for (i = 1; i <= 10; i++) {
        sum += factorial(i);
    }
    
    printf("1!+2!+3!+...+10!=%d", sum);

    return 0;
}