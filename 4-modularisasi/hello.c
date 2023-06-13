#include "hello.h"
#include <stdio.h>

void input_mhs(Mahasiswa *mhs){
    printf("Masukkan nama: ");
    scanf("%s", mhs->nama);

    int ipk;
    printf("Masukkan IPK: ");
    scanf("%d", &ipk);
    mhs->ipk = ipk;
}

void print_mhs(Mahasiswa *mhs, int jumlahData){
    printf("Data Mahasiswa: \n");
    for(int i=0;i<jumlahData;i++){
        printf("Nama: %s\n", mhs[i].nama);
        printf("IPK: %d\n", mhs[i].ipk);
        printf("---------------------\n");
    }
}