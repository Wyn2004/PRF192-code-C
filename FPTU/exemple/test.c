#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Cac so chinh phuong tu 1 den %d la:\n", n);
    int count = 0;
    for (int i = 1; i <= n; i++) {
        // Kiểm tra xem i có phải là số chính phương hay không
        double squareRoot = sqrt(i);
        if (squareRoot == (int)squareRoot) {
            printf("%d ", i);
            count ++;
        }
    }
    printf("\n%d",count);
    printf("\n");
    return 0;
}
