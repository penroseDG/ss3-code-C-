#include <stdio.h> 

int main() {
    float toan;  
    float van; 
    float anh; 
    float tong = toan + van + anh;
    float diemtb = tong / 3;

    printf("diem toan la: ");
    scanf("%f", &toan);

    printf("diem van la: ");
    scanf("%f", &van);

    printf("diem anh la: ");
    scanf("%f", &anh);

    printf("diem tong la: %.2f\n", tong);
    printf("diem trung binh la: %.2f\n", diemtb);

    return 0;  
}

