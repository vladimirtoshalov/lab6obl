#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

//вариант 26:


int main() {
    setlocale(LC_ALL, ".UTF8");
    double x, y;

    printf("Введите координаты точки x и y через пробел:\n");
    scanf("%lf %lf", &x, &y);

    if ((x >= -5 && x <= -1 && y >= -5 && y <= -2) ||
        (x >= -1 && x <= 2 && y >= -5 && y <= 5) ||
        (x >= 2 && x <= 6 && y >= 2 && y <= 5)) {
        printf("Точка (%.2lf; %.2lf) принадлежит заштрихованной области\n", x, y);
    }
    else {
        printf("Точка (%.2lf; %.2lf) не принадлежит заштрихованной области\n", x, y);
    }

    return 0;
}
