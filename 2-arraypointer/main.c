#include <stdio.h>

int main(void){
    int array[3] = {4,5,6};
    int i;
    
    // cek total nilai array
    printf("nilai array: %lu\n",sizeof(array));

    // hitung panjang array
    // karena int = 4 byte, maka total byte array / 4 byte
    // kebetulan arraynya int

    int len = sizeof(array) / sizeof(array[0]);
    printf("nilai panjang array: %d\n",len);
    
    

    // di C array sama kayak pointer
    // bedanya array ngepoint ke index
    
    int *px = array;

    // coba print isi array
    printf("print array: ");
    for(i=0;i<len;i++){
        printf("%d ",array[i]);
    }
    printf("\n");

    // coba print dari px
    printf("print isi px: ");
    for(i=0;i<len;i++){
        printf("%d ",px[i]);
    }
    printf("\n");
    

    
    // di C, gaada yang ngejaga atau batesin panjang
    // dari suatu array.
    // dimana array = pointer, berati bisa digeser
    //
    // misal array[0] = 1. otomatis px[1] = 1
    printf("nilai array[0]: %d\n", array[0]);
    printf("nilai px[0]: %d\n",*px);

    // coba kita geser pointernya di px
    // otomatis px[0] isinya jadi px[1] begeser
    px++;
    printf("nilai array[0]: %d\n", array[0]);
    printf("nilai px[0] sudah geser: %d\n", px[0]);
    
    // nah karena tadi udah diitung panjang array=3
    // coba kita print semua isi px yg udah digeser
    //
    // px awal -> {1,2,3}
    // px geser -> 1,{2,3,gatau}
    //
    printf("isi px udah digeser: ");
    for(i=0;i<len;i++){
        printf("%d ",px[i]);
    }
    printf("\n");

    return 0;
}
