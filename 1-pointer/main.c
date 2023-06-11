#include <stdio.h>

int main(){

    int a = 10;
    int *p = &a;

    printf("Nilai dari a: %d\n", *p);

    *p = 100;

    printf("Nilai a habis diubah dari *p: %d\n", a);

    return 0;
}