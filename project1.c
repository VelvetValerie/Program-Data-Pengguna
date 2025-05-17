#include <stdio.h>

#define MAX_USER 100

typedef struct {
    char nama[50];
    int umur;
    char hobi[50];
    char bakat[50];
    char minat[50];
    char email[100];
} Pengguna;

void hapus_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {
    Pengguna daftar[MAX_USER];
    int jumlah = 0;
    int pilihan;

    // Banner
    printf("=====================================\n");
    printf("||     PROGRAM DATA PENGGUNA       ||\n");
    printf("||       Versi 1.0 - C Language     ||\n");
    printf("||     Kontak: info@perusahaan.com ||\n");
    printf("=====================================\n");

    do {
        printf("\n=== MENU ===\n");
        printf("1. Input Data Pengguna\n");
        printf("2. Tampilkan pengguna\n");
        printf("3. Keluar\n");
        printf("4. Hubungi Perusahaan\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                if (jumlah < MAX_USER) {
                char umur_str[10]; // untuk input umur dalam bentuk string

                while (getchar() != '\n'); // buang newline dari input sebelumnya

                printf("Masukkan nama: ");
                fgets(daftar[jumlah].nama, sizeof(daftar[jumlah].nama), stdin);
                hapus_newline(daftar[jumlah].nama);

                printf("Masukkan umur: ");
                fgets(umur_str, sizeof(umur_str), stdin);
                sscanf(umur_str, "%d", &daftar[jumlah].umur);  // konversi ke int

                printf("Masukkan hobi: ");
                fgets(daftar[jumlah].hobi, sizeof(daftar[jumlah].hobi), stdin);
                hapus_newline(daftar[jumlah].hobi);

                printf("Masukkan bakat: ");
                fgets(daftar[jumlah].bakat, sizeof(daftar[jumlah].bakat), stdin);
                hapus_newline(daftar[jumlah].bakat);

                printf("Masukkan minat: ");
                fgets(daftar[jumlah].minat, sizeof(daftar[jumlah].minat), stdin);
                hapus_newline(daftar[jumlah].minat);

                printf("Masukkan email : ");
                fgets(daftar[jumlah].email, sizeof(daftar[jumlah].email), stdin);
                hapus_newline(daftar[jumlah].email);

                jumlah++;
                printf("Data pengguna berhasil disimpan!\n");
            } else {
                printf("Kapasitas pengguna penuh!\n");
            }
                break;
            case 2:
                 printf("\n--- Daftar Pengguna ---\n");
                for (int i = 0; i < jumlah; i++) {
                    printf("Pengguna %d:\n", i + 1);
                    printf("Nama : %s\n", daftar[i].nama);
                    printf("Umur : %d\n", daftar[i].umur);
                    printf("Hobi : %s\n", daftar[i].hobi);
                    printf("Bakat: %s\n", daftar[i].bakat);
                    printf("Minat: %s\n", daftar[i].minat);
                    printf("Email: %s\n", daftar[i].email);
                }
                break;
            case 3:
                printf("Terima kasih! Program selesai.\n");
                break;
            case 4:
                printf("Hubungi kami di: info@perusahaan.com\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }

    } while (pilihan != 3);

    return 0;
}