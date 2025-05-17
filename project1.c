#include <stdio.h>

int main() {
    int pilihan;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Data Diri\n");
        printf("2. Bakat dan Minat\n");
        printf("3. Tampilkan Biodata");
        printf("4. Keluar\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                char nama[50];
                int umur;
                char hobi[50];

                printf("Masukkan nama: ");
                fgets(nama, sizeof(nama), stdin);

                printf("Masukkan umur: ");
                scanf("%d", &umur);
                getchar(); // membersihkan newline sisa input

                printf("Masukkan hobi: ");
                fgets(hobi, sizeof(hobi), stdin);

                // Menampilkan hasil
                printf("\n--- Perkenalan Diri ---\n");
                printf("Nama : %s", nama);
                printf("Umur : %d tahun\n", umur);
                printf("Hobi : %s", hobi);
                break;
            case 2:
                char bakat[50];
                char minat[50];

                printf("Masukkan bakat Anda: ");
                fgets(bakat, sizeof(bakat), stdin);

                printf("Masukkan minat Anda: ");
                fgets(minat, sizeof(minat), stdin);

                printf("\n--- Bakat dan Minat ---\n");
                printf("Bakat : %s", bakat);
                printf("Minat : %s", minat);
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