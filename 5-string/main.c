#include <stdio.h>
#include <string.h>

int main(void){
    char salam[] = "Selamat Pagi";
    size_t salam_size = sizeof(salam);

    // Hasilnya akan 13
    // Karena huruf+spasi = 12, +1 untuk \0 jadi totalnya 13 (ukuran)
    printf("Ukuran dari '%s' adalah %lu -> karena ada '\\0' diakhir\n",salam, salam_size);
    
    // Gimana kalo panjang dari sting?
    // Pakai fungsi strlen() dari string.h
    printf("Panjang dari '%s' adalah %lu\n\n", salam, strlen(salam));

    // Gimana kalo char pointer? inget pointer kan sama kek array
    // Jadi mari kita coba
    char *pg;
    pg = salam;
    printf("Index - Char - ASCII\n");
    for(int i=0; i<salam_size; i++, pg++){
        printf("%d - %c - %x\n", i, *pg, *pg);
    }

    return 0;
}