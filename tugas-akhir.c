#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Struktur untuk menyimpan informasi menu
struct Menu
{
    char nama[50];
    double harga;
};

// Struktur untuk menyimpan detail pesanan
struct Pesanan
{
    char nama[50];
    double harga;
    int jumlah;
};

void tampilkanSelamatDatang()
{
    printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
    printf("\t\t\t        \xb3                 SELAMAT DATANG DI WARUNG MADH'TOYA                 \xb3\n");
    printf("\t\t\t        \xb3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb3\n");
}

void tampilkanMenu(struct Menu menu[], int jumlahMenu)
{
    printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
    for (int i = 0; i < jumlahMenu; i++)
    {
        printf("\t\t\t\t\xb3 %-4d \xb3 %-35s \xb3 Rp. %-17.2f\xb3\n", i + 1, menu[i].nama, menu[i].harga);
    }
    printf("\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
}

int bacaNomor()
{
    int nomor;
    while (1)
    {
        printf("\n\t\t\t\t                       MASUKKAN NOMOR: ");
        if (scanf("%d", &nomor) == 1)
        {
            break;
        }
        else
        {
            printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
            printf("\t\t\t        \xb3                          MASUKKAN TIDAK VALID. SILAKAN MASUKKAN ANGKA                      \xb3\n");
            printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
            scanf("%*s");
        }
    }
    return nomor;
}

int bacaJumlahMenu()
{
    int jumlah;
    while (1)
    {
        printf("\n\t\t\t\t                       MASUKKAN JUMLAH MENU: ");

        printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
        if (scanf("%d", &jumlah) == 1 && jumlah > 0)
        {
            break;
        }
        else
        {
            printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
            printf("\t\t\t        \xb3                          MASUKKAN JUMLAH MENU YANG VALID                         \xb3\n");
            printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
            scanf("%*s");
        }
    }
    return jumlah;
}

void tambahPesanan(struct Pesanan pesanan[], int *jumlahPesanan, struct Menu menu[], int jumlahMenu)
{
    int pilihan, jumlahMenuPesanan;

    tampilkanMenu(menu, jumlahMenu);

    do
    {
        pilihan = bacaNomor();

        // Validasi nomor menu
        if (pilihan < 1 || pilihan > jumlahMenu)
        {
            printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
            printf("\t\t\t        \xb3                          Nomor menu tidak valid. Silakan pilih kembali                         \xb3\n");
            printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
        }
        else
        {
            // Meminta pengguna untuk memasukkan jumlah menu
            printf("\n\t\t\t\t                       MASUKKAN JUMLAH MENU: ");
            scanf("%d", &jumlahMenuPesanan);

            // Tambahkan pesanan ke daftar pesanan
            strcpy(pesanan[*jumlahPesanan].nama, menu[pilihan - 1].nama);
            pesanan[*jumlahPesanan].harga = menu[pilihan - 1].harga;
            pesanan[*jumlahPesanan].jumlah = jumlahMenuPesanan;
            (*jumlahPesanan)++;
            break; // Keluar dari loop jika nomor menu valid
        }
    } while (1);
}

void hitungTotalHarga(struct Pesanan pesanan[], int jumlahPesanan, double *totalHarga)
{
    for (int i = 0; i < jumlahPesanan; i++)
    {
        *totalHarga += pesanan[i].harga * pesanan[i].jumlah;
    }
}

void tampilkanDetailPesanan(struct Pesanan pesanan[], int jumlahPesanan, double *totalHarga)
{

    printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
    printf("\t\t\t        \xb3                          DETAIL PESANAN                            \xb3\n");
    printf("\t\t\t        \xb3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb3\n");
    for (int i = 0; i < jumlahPesanan; i++)
    {
        printf("\t\t\t\t\xb3 %-16s \xb3       X%-4d \xb3      Rp. %-21.2f    \xb3\n", pesanan[i].nama, pesanan[i].jumlah, pesanan[i].harga * pesanan[i].jumlah);
        printf("\t\t\t        \xb3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb3\n");
    }
    printf("\t\t\t\t\xb3 Total Harga      \xb3                    Rp. %-25.2f\xb3\n", *totalHarga);
    printf("\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
}

void prosesPembayaran(double totalHarga, struct Pesanan pesanan[], int jumlahPesanan)
{
    double diskon = 0.0;
    double totalHargaSetelahDiskon = totalHarga;
    int adaDiskon = 0;
    char kodeDiskon[20];
    int tipePesanan;
    double pembayaran;
    double kembalian;

    do
    {
        printf("\n\t\t\t\t       APAKAH ANDA MEMILIKI KODE DISKON (1: YA, 0: TIDAK)? ");
        scanf("%d", &adaDiskon);

        // Jika ada diskon, masukkan kode diskon
        if (adaDiskon == 1)
        {
            printf("\t\t\t\t\t            MASUKKAN KODE DISKON: ");
            scanf("%s", kodeDiskon);

            // Validasi kode diskon (contoh: DISKON123)
            if (strcmp(kodeDiskon, "DISKON123") == 0)
            {
                diskon = 0.1; // Diskon 10% jika ada diskon
                totalHargaSetelahDiskon = totalHarga - (totalHarga * diskon);
            }
            else
            {
                printf("\t\t\t\t\t            KODE DISKON TIDAK VALID. ");
                adaDiskon = 0;
            }
        }
        else if (adaDiskon != 0)
        {
            printf("\n\t\t\t\t                      INPUT TIDAK VALID.\n");
        }
    } while (adaDiskon != 0 && adaDiskon != 1);

    // Tanyakan tipe pesanan (1: Dine in, 2: Take away)
    printf("\n\t\t\t\t          PILIH TIPE PESANAN (1: DINE IN, 2: TAKE AWAY): ");
    scanf("%d", &tipePesanan);

    // Hitung total harga setelah diskon
    // if (adaDiskon)
    // {
    // }

    // Tampilkan konfirmasi pesanan
    printf("\n\t\t\t\t                         KONFIRMASI PESANAN\n ");
    printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
    printf("\t\t\t        \xb3                          DETAIL PESANAN                            \xb3\n");
    printf("\t\t\t        \xb3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb3\n");
    for (int i = 0; i < jumlahPesanan; i++)
    {
        printf("\t\t\t\t\xb3 %-16s \xb3       X%-4d \xb3      Rp. %-21.2f    \xb3\n", pesanan[i].nama, pesanan[i].jumlah, pesanan[i].harga * pesanan[i].jumlah);
        printf("\t\t\t        \xb3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb3\n");
    }

    if (adaDiskon)
    {
        printf("\t\t\t        \xb3                       DISKON: %.2f%%                               \xb3\n", diskon * 100);
    }

    // Tampilkan tipe pesanan
    if (tipePesanan == 1)
    {
        printf("\t\t\t        \xb3                       TIPE PESANAN: DINE IN                        \xb3\n");
    }
    else if (tipePesanan == 2)
    {
        printf("\t\t\t        \xb3                       TIPE PESANAN: TAKE AWAY                      \xb3\n");
        totalHargaSetelahDiskon += 2500;
        printf("\t\t\t        \xb3                  BIAYA TAMBAHAN TAKE AWAY: RP. 2500                \xb3\n");
    }
    printf("\t\t\t        \xb3                       TOTAL HARGA: RP. %.2f                    \xb3\n", totalHargaSetelahDiskon);
    printf("\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");

    do
    {
        // Input jumlah pembayaran
        printf("\n\t\t\t\t MASUKKAN JUMLAH UANG ANDA: RP. ");
        scanf("%lf", &pembayaran);

        // Cek apakah jumlah pembayaran cukup
        if (pembayaran < totalHargaSetelahDiskon)
        {
            printf("\n\t\t\t\t PEMBAYARAN KURANG. SILAKAN MASUKKAN JUMLAH PEMBAYARAN YANG MENCUKUPI.\n");
        }
        else
        {
            // Hitung kembalian
            kembalian = pembayaran - totalHargaSetelahDiskon;
            break;
        }

    } while (1);

    system("cls");
    // Tampilkan nota pembayaran
    printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
    printf("\t\t\t        \xb3                          NOTA PEMBAYARAN                           \xb3\n");
    printf("\t\t\t        \xb3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb3\n");

    printf("\t\t\t        \xb3                          DETAIL PESANAN                            \xb3\n");
    printf("\t\t\t        \xb3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb3\n");
    for (int i = 0; i < jumlahPesanan; i++)
    {
        printf("\t\t\t\t\xb3 %-16s \xb3       X%-4d \xb3      Rp. %-21.2f    \xb3\n", pesanan[i].nama, pesanan[i].jumlah, pesanan[i].harga * pesanan[i].jumlah);
        printf("\t\t\t        \xb3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb3\n");
    }

    if (adaDiskon)
    {
        printf("\t\t\t        \xb3                       DISKON: %.2f%%                               \xb3\n", diskon * 100);
    }

    // Tampilkan tipe pesanan
    if (tipePesanan == 1)
    {
        printf("\t\t\t        \xb3                       TIPE PESANAN: DINE IN                        \xb3\n");
    }
    else if (tipePesanan == 2)
    {
        printf("\t\t\t        \xb3                       TIPE PESANAN: TAKE AWAY                      \xb3\n");
        printf("\t\t\t        \xb3                  BIAYA TAMBAHAN TAKE AWAY: RP. 2500                \xb3\n");
    }
    printf("\t\t\t        \xb3                   TOTAL HARGA: RP. %.2f                        \xb3\n", totalHargaSetelahDiskon);

    // Tampilkan jumlah pembayaran dan kembalian
    printf("\t\t\t        \xb3                  JUMLAH PEMBAYARAN: RP. %.2f                   \xb3\n", pembayaran);
    printf("\t\t\t        \xb3                       KEMBALIAN: RP. %.2f                      \xb3\n", kembalian);
    printf("\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
    printf("\n\t\t\t\t\t      TERIMA KASIH. MOHON MENUNGGU PESANAN ANDA.\n\n");
}

int totalHargaSetelahDiskon;
int totalHarga;

int main()
{
    tampilkanSelamatDatang();

    // Inisialisasi menu makanan dan minuman
    struct Menu menuMakanan[] = {
        {"Nasi Ayam Tepung", 18000}, {"Nasi Ayam Bacem", 18000}, {"Nasi Ayam Lalapan Jumbo", 18000}, {"Nasi Bakar Jumbo", 18000}, {"Nasi Ayam Penyet Jumbo", 18000}, {"Nasi Ayam Kecap", 18000}, {"Nasi Ayam Penyet", 15000}, {"Nasi Ayam Bakar Pedas", 15000}, {"Nasi Ayam Lalapan", 15000}, {"Nasi Lele Lalapan", 15000}, {"Nasi 4T", 12000}, {"Capcay", 12000}, {"Nasi Sayap Pedas Manis", 10000}, {"Nasi Telur Tumis Jamur", 10000}, {"Nasi Telur Cah Kangkung", 10000}, {"Nasi Goreng", 10000}, {"Nasi Mawut", 10000}, {"Mie Goreng", 10000}, {"Bihun Goreng", 10000}, {"Nasi Omlete", 10000}, {"Nasi Orenk Buncis", 10000}, {"Nasi Telur Sosis", 10000}, {"Nasi Telur Oseng Tempe Tahu", 10000}, {"Mie Kuah", 8000}, {"Tempe Mendoan", 8000}, {"Bakwan", 8000}
        // Menu makanan
    };

    struct Menu menuMinuman[] = {
        {"Teh panas", 4000}, {"Teh dingin", 4000}, {"Jeruk panas", 5000}, {"Jeruk dingin", 5000}, {"Kopi", 5000}, {"Teh Tarik panas", 6000}, {"Lemon panas", 4000}, {"Lemon dingin", 4000}, {"Air Mineral Botol", 5000}, {"Air Mineral Botol dingin", 5000}
        // Menu minuman
    };

    struct Pesanan pesanan[50]; // Maksimal 50 pesanan
    int jumlahPesanan = 0;
    int jenisMenu;
    int pilihan;
    int jumlahMenuMakanan = 0; // Menyimpan jumlah menu makanan yang dipilih
    int jumlahMenuMinuman = 0; // Menyimpan jumlah menu minuman yang dipilih
    double totalHarga = 0;

    // Pilih jenis menu (makanan atau minuman)
    do
    {
        printf("\t\t\t        \xb3                       PILIH JENIS MENU                             \xb3\n");
        printf("\t\t\t        \xb3                       1. MAKANAN                                   \xb3\n");
        printf("\t\t\t        \xb3                       2. MINUMAN                                   \xb3\n");
        printf("\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
        jenisMenu = bacaNomor();

        // Validasi jenis menu
        if (jenisMenu != 1 && jenisMenu != 2)
        {
            printf("Jenis menu tidak valid. Silakan pilih kembali.\n");
        }
        else
        {
            break; // Keluar dari loop jika jenis menu valid
        }
    } while (1);

    // Proses pemilihan menu spesifik pada jenis yang dipilih
    switch (jenisMenu)
    {
    case 1:
        // Pilihan menu makanan
        tambahPesanan(pesanan, &jumlahPesanan, menuMakanan, sizeof(menuMakanan) / sizeof(menuMakanan[0]));
        break;

    case 2:
        // Pilihan menu minuman
        tambahPesanan(pesanan, &jumlahPesanan, menuMinuman, sizeof(menuMinuman) / sizeof(menuMinuman[0]));
        break;

    default:
        printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
        printf("\t\t\t        \xb3                          Jenis menu tidak valid. Silakan pilih kembali                         \xb3\n");
        printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
        return 0;
    }

    // Tanyakan apakah ingin menambah pesanan lagi
    int tambahan;
    do
    {

        printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
        printf("\t\t\t        \xb3              Apakah ingin menambah pesanan lagi?                   \xb3\n");
        printf("\t\t\t        \xb3              1. YA                                                 \xb3\n");
        printf("\t\t\t        \xb3              2. TIDAK                                              \xb3\n");
        printf("\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
        printf("\n\t\t\t\t                       MASUKKAN NOMOR: ");
        scanf("%d", &tambahan);

        if (tambahan == 1)
        {
            // Pilih jenis menu (makanan atau minuman)
            do
            {
                printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
                printf("\t\t\t        \xb3                          PILIH JENIS MENU                          \xb3\n");
                printf("\t\t\t        \xb3                       1. MAKANAN                                   \xb3\n");
                printf("\t\t\t        \xb3                       2. MINUMAN                                   \xb3\n");
                printf("\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
                jenisMenu = bacaNomor();

                // Validasi jenis menu
                if (jenisMenu != 1 && jenisMenu != 2)
                {

                    printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
                    printf("\t\t\t        \xb3                          Jenis menu tidak valid. Silakan pilih kembali                         \xb3\n");
                    printf("\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
                }
                else
                {
                    break; // Keluar dari loop jika jenis menu valid
                }
            } while (1);

            // Proses pemilihan menu spesifik pada jenis yang dipilih
            switch (jenisMenu)
            {
            case 1:
                // Pilihan menu makanan
                tambahPesanan(pesanan, &jumlahPesanan, menuMakanan, sizeof(menuMakanan) / sizeof(menuMakanan[0]));
                break;

            case 2:
                // Pilihan menu minuman
                tambahPesanan(pesanan, &jumlahPesanan, menuMinuman, sizeof(menuMinuman) / sizeof(menuMinuman[0]));
                break;

            default:
                printf("Jenis menu tidak valid. Keluar dari program.\n");
                return 0;
            }
        }
        else if (tambahan != 2)
        {
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }

    } while (tambahan != 2);

    // Hitung total harga
    hitungTotalHarga(pesanan, jumlahPesanan, &totalHarga);

    // Tampilkan detail pesanan
    tampilkanDetailPesanan(pesanan, jumlahPesanan, &totalHarga);

    // Proses pembayaran
    prosesPembayaran(totalHarga, pesanan, jumlahPesanan);

    return 0;
}
