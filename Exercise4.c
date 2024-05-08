#include <stdio.h>

int main() {
    int num, replaceByte;
    unsigned char *bytes;

    // Считываем целое положительное число с клавиатуры
    printf("Введите целое положительное число (int): ");
    scanf("%d", &num);

    // Считываем число для замены третьего байта
    printf("Введите число для замены третьего байта: ");
    scanf("%d", &replaceByte);
    if (replaceByte > 255 || replaceByte < 0) {
        printf("Число для замены третьего байта должно быть от 0 до 255\n");
        return 1;
    }
    bytes = (unsigned char *)&num;
    bytes[2] = (unsigned char)replaceByte;
    printf("Измененное число: %d\n", num);

    return 0;
}