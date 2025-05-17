#include <stdio.h>

int main() {
    int pilihan;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Opsi Satu\n");
        printf("2. Opsi Dua\n");
        printf("3. Keluar\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Anda memilih Opsi Satu.\n");
                break;
            case 2:
                printf("Anda memilih Opsi Dua.\n");
                break;
            case 3:
                printf("Terima kasih! Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }

    } while (pilihan != 3);

    return 0;
}