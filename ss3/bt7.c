#include <stdio.h>

int main() {
    int so, chu_so1, chu_so2, chu_so3, chu_so4, tong;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);

    if (so < 1000 || so > 9999) {
        printf("So nhap khong phai la so co 4 chu so. Vui long thu lai.\n");
    } else {
        chu_so1 = so / 1000;       
        chu_so2 = (so / 100) % 10;
        chu_so3 = (so / 10) % 10;  
        chu_so4 = so % 10;         
        tong = chu_so1 + chu_so2 + chu_so3 + chu_so4;

        printf("Tong cac chu so cua so da nhap la: %d\n", tong);
    }

    return 0;
}

