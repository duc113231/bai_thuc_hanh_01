#include<stdio.h>
#include<math.h>
int main() {
	int n;
    printf("Nhap so phan tu N: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("Gia tri lon nhat trong mang: %d\n", max);
}
