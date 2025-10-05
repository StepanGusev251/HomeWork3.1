#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
    int A, B, C;
    setlocale(LC_ALL, "RUS");
    // Ввод номеров игроков
    printf("Введите номера игроков A, B, C через пробел: ");
    scanf("%d %d %d", &A, &B, &C);

    // Проверка условия
    if ((A + B + C) % 3 == 0) {
        printf("Это счастливый состав.\n");
    }
    else {
        printf("Это не счастливый состав.\n");
    }

    return 0;
}
