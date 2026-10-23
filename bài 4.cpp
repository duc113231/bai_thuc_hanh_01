#include<stdio.h>
#include<math.h>
int main() {
    int a, b;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);
    int temp_a = (a < 0) ? -a : a;
    int temp_b = (b < 0) ? -b : b;
    printf("Cac uoc so chung cua %d va %d la: ", a, b);
    int min = (temp_a < temp_b) ? temp_a : temp_b;
    for (int i = 1; i <= min; i++) {
        if (temp_a % i == 0 && temp_b % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
