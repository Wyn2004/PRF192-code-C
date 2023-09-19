#include <stdio.h>

int main() {
    printf("ASCII Code Table:\n");
    for (int i = 0; i <= 255; i++) {
        printf("%c : %d, %o, %X\n", i, i, i, i);
        if (i != 0 && i % 20 == 0) {
            getchar();
        }
    }
    return 0;
} 