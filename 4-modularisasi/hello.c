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