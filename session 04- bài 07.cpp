#include <stdio.h>
int main() {
    int year;
    printf("Nhap mot nam: ");
    scanf("%d", &year);
    if (year / 4 == 0){
        printf("%d la nam nhuan.\n", year);
    } else {
        printf("%d khong la nam nhuan.\n", year);
    }

    return 0;
}
