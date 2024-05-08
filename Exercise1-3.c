#include "stdio.h"
#include "stdlib.h"

void print_bit_byte(unsigned char aByte) {
    int count = 0;
    for (int i = 15; i >= 0; i--) {
        if (aByte & (1 << i)) {
            printf("1");
            count++;
        } else {
            printf("0");
        }
        if (i % 8 == 0){
            printf(" ");
        }
       
    }
    printf("\n");
    printf("Количество единиц: %d\n", count);
}

int main() {
    unsigned char uc;
    scanf("%hhd", &uc);
    print_bit_byte(uc);
    return 0;
}