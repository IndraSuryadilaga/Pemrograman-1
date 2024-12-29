#include <stdio.h>

int main() {
    int jumlah_detik;
    scanf("%d", &jumlah_detik);

    int jam = jumlah_detik / 3600;
    int menit = (jumlah_detik % 3600) / 60;
    int detik = jumlah_detik % 60;

    if (jam >= 24) {
        int hari = jam / 24;
        int jam = jam % 24;
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }
    return 0;
}