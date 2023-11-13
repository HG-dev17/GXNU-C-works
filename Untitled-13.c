#include <stdio.h>

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