#include <stdio.h>
#include <stdbool.h>
/*
输出500以内所有的素数，各数之间用空格间隔
输入示例：
输出示例：
2 3 5 7 11 13 17 19 23 ......
*/
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    for (int i = 2; i <= 500; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}