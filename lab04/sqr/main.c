#include <stdio.h>

int main() {
    // Введення кутів a, b і c
    double a, b, c;

    printf("Введіть кут a:");
    scanf("%lf", &a);

    printf("Введіть кут b:");
    scanf("%lf", &b);

    printf("Введіть кут c:");
    scanf("%lf", &c);

    // Перевірка умови існування трикутника
    if (a + b + c == 180 && a > 0 && b > 0 && c > 0) {
        printf("Трикутник існує.\n");
    } else {
        printf("Трикутника не існує.\n");
    }

    return 0;
}
