#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    float a, b, c;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите длину стороны квадрата: ");
    scanf_s("%f", &a);
    b = a / 2.0;
    c = a * sqrt(2.0) / 2.0;

    printf("Радиус вписанной окружности: %.2f\n", b);
    printf("Радиус описанной окружности: %.2f\n", c);

}