#include <stdio.h>
#include "hello.h"

int main(void){
    Mahasiswa data[100];
    int jumlahData = 0;
    int pilihan = 0;

    do {
        printf("Menu:\n");
        printf("1. Input Data Mahasiswa\n");
        printf("2. Tampilkan Data Mahasiswa\n");
        printf("0. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                input_mhs(&data[jumlahData]);
                jumlahData++;
                break;
            case 2:
                print_mhs(data, jumlahData);
                break;
            case 0:
                printf("Terima kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan pilih lagi.\n");
                break;
        }
    } while (pilihan != 0);
    
    return 0;
}