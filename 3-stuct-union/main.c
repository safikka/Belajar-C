#include <stdio.h>

// STRUCT
// 
// 
struct item_t {
    char    *nama;
    int     kuantitas;
    float   harga;
};

// fungsi print
void print_hasil(struct item_t *item){
    printf("%s - %d pcs - Rp.%.2f\n", item->nama, item->kuantitas, item->harga);
}

// fungsi ngubah isi struct
void reduce_stock(struct item_t *item, int q){
    (*item).kuantitas -= q;
}

void materi_struct(){
    // deklarasi item dari struct item_t
    struct item_t item;

    item.nama = "Bisi 18";
    item.kuantitas = 20;
    item.harga = 2000;
    printf("%s - %d pcs - Rp.%.2f\n", item.nama, item.kuantitas, item.harga);
    
    reduce_stock(&item,5);

    print_hasil(&item);
}
// 
// 
// STRUCT



// UNION
// 
// 

// Size dari union mengikuti dari size paling besar, jadi 4byte
union value_t{
    int i;      // 4byte
    float f;    // 4byte
    char c;     // 1byte
};

void materi_union(){
    union value_t value;
    value.i = 20;

    printf("Value = %d\n", value.i);
}

// 
// 
// UNION

int main(void){

    materi_struct();
    printf("\n");
    printf("------\n");
    printf("\n");
    materi_union();

    return 0;
}
