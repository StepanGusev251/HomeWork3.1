#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
    int A, B, C;
    setlocale(LC_ALL, "RUS");
    // ���� ������� �������
    printf("������� ������ ������� A, B, C ����� ������: ");
    scanf("%d %d %d", &A, &B, &C);

    // �������� �������
    if ((A + B + C) % 3 == 0) {
        printf("��� ���������� ������.\n");
    }
    else {
        printf("��� �� ���������� ������.\n");
    }

    return 0;
}