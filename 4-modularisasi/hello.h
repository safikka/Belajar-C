#ifndef HELLO_H
#define HELLO_H

typedef struct{
    char *nama;
    int ipk;
} Mahasiswa;

void input_mhs(Mahasiswa *mhs);
void print_mhs(Mahasiswa *mhs, int jumlahData);

#endif