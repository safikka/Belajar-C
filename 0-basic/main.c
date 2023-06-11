#include <stdio.h>

int main(void){
    
    int age;

    printf("Masukan umur anda: ");
    scanf("%d",&age);

    if(age < 20){
        printf("Masih remaja\n");
    } else {
        printf("Udah tua ni\n");
    }
    
    return 0;
}
