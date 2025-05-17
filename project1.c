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

int main() {
    Pengguna daftar[MAX_USER];
    int jumlah = 0;
    int pilihan;

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
                    printf("Masukkan nama: ");
                    fgets(daftar[jumlah].nama, sizeof(daftar[jumlah].nama), stdin);

                    printf("Masukkan umur: ");
                    scanf("%d", &daftar[jumlah].umur);
                    getchar();

                    printf("Masukkan hobi: ");
                    fgets(daftar[jumlah].hobi, sizeof(daftar[jumlah].hobi), stdin);

                    printf("Masukkan bakat: ");
                    fgets(daftar[jumlah].bakat, sizeof(daftar[jumlah].bakat), stdin);

                    printf("Masukkan minat: ");
                    fgets(daftar[jumlah].minat, sizeof(daftar[jumlah].minat), stdin);

                    printf("Masukkan email : ");
                    fgets(daftar[jumlah].email, sizeof(daftar[jumlah].email), stdin);

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
                    printf("Nama : %s", daftar[i].nama);
                    printf("Umur : %d\n", daftar[i].umur);
                    printf("Hobi : %s", daftar[i].hobi);
                    printf("Bakat: %s", daftar[i].bakat);
                    printf("Minat: %s\n", daftar[i].minat);
                    printf("Email: %s", daftar[i].email);
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