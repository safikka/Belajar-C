#include <stdio.h>
#include "hello.h"

int main(void){
    Mahasiswa data;
    input_mhs(&data);
    printf("Nama: %s\n",data.nama);
    printf("IPK: %d\n",data.ipk);
    return 0;
}