#include <stdio.h>
int main() {
    int chi_so_cu, chi_so_moi;
    float dien_tieu_thu, tien_dien = 0;
    printf("Nhap chi so cu (kWh): ");
    scanf("%d", &chi_so_cu);
    printf("Nhap chi so moi (kWh): ");
    scanf("%d", &chi_so_moi);
    dien_tieu_thu = chi_so_moi - chi_so_cu;
    if (dien_tieu_thu <= 50) {
        tien_dien = dien_tieu_thu * 10.000;
    } else if (dien_tieu_thu <= 100) {
        tien_dien = 50 * 10.000 + (dien_tieu_thu - 50) * 15.000;
    } else if (dien_tieu_thu <= 150) {
        tien_dien = 50 * 10.000 + 50 * 15.000 + (dien_tieu_thu - 100) * 20.000;
    } else if (dien_tieu_thu <= 200) {
        tien_dien = 50 * 10.000 + 50 * 15.000 + 50 * 20.000 + (dien_tieu_thu - 150) * 25.000;
    } else {
        tien_dien = 50 * 10.000 + 50 * 15.000 + 50 * 20.000 + 50 * 25.000 + (dien_tieu_thu - 200) * 30.000;
    }
    printf("So dien tieu thu trong thang: %.2f kWh\n", dien_tieu_thu);
    printf("Tien dien phai tra: %.2f VND\n", tien_dien);

    return 0;
}
