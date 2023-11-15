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
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int i, gys = 1;
    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gys = i;
        }
    }
    int gbs = (num1 * num2) / gys;
    printf("%d %d", gys,gbs);
    return 0;
}