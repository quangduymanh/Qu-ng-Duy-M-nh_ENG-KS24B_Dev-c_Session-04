#include <stdio.h>

int main() {
    int day, month, year;
    printf("Nhap ngay, thang, nam: ");
    scanf("%d %d %d", &day, &month, &year);
    if (month < 1 || month > 12) {
        printf("Thang khong hop le.\n");
    } else {
        int songaycaonhat;
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                songaycaonhat = 31;
                break;
            case 4: case 6: case 9: case 11:
                songaycaonhat = 30;
                break;
            case 2:
                songaycaonhat = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 29 : 28;
                break;
            default:
                songaycaonhat = 0;
        }
        if (day < 1 || day > songaycaonhat) {
            printf("Ngay khong hop le.\n");
        } else {
            printf("Ngay thang nam %d-%d-%d la hop le.\n", day, month, year);
        }
    }

    return 0;
}

