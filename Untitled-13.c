#include <stdio.h>
/*
从 1 开始数到数字 200，如果数字中含有 7 ，或者该数字是 7 的倍数，打印apple，其余数字直接打印输出，每次循环输出间使用空格间隔。
输入示例：
输出示例：
1 2 3 4 5 6 apple 8 9 10 11 12 13 apple 15 16 apple 18 19 20 ......
*/
int main() {
    for (int i = 1; i <= 200; i++) {
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
            printf("apple ");
        } else {
            printf("%d ", i);
        }

    }

    return 0;
}