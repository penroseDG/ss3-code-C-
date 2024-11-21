#include <stdio.h>

int main() {
    float C, F;
    printf("Nhap nhiet do theo do C: ");
    scanf("%f", &C);
    F = (C * 9/5) + 32;
    printf("%.2f do C = %.2f do F\n", C, F);

    return 0;
}

