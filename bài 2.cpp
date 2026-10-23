#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("%d khong phai la so nguyen to\n", n);
        return;
    }
    int lasonto = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            lasonto = 0;
            break;
        }
    }

    if (lasonto) {
        printf("%d la so nguyen to\n", n);
    } else {
        printf("%d khong phai la so nguyen to\n", n);
    }
}
