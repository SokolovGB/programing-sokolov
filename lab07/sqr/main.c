#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findLastMultipleOf7(int start, int end) {
    return end - (end % 7);
}

void calculateRatio(int n, int arr[]) {
    if (n <= 0) {
        printf("Некоректний розмір масиву.\n");
        return;
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        max = (arr[i] > max) ? arr[i] : max;
        min = (arr[i] < min) ? arr[i] : min;
    }

    if (min == 0) {
        printf("Ділення на 0 неможливе.\n");
    } else {
        float ratio = (float)max / min;
        printf("Відношення максимального до мінімального: %.2f\n", ratio);
    }
}

int main(int argc, char *argv[]) {
    // Встановлення вхідних даних через аргументи командного рядка або значення за умовчанням
    int start = (argc > 1) ? atoi(argv[1]) : 1;
    int end = (argc > 2) ? atoi(argv[2]) : 100;

    // Генерація розміру масиву випадковим чином
    srand(time(NULL));
    int n = rand() % 10 + 1;

    // Генерація масиву з випадковими елементами
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    // Виклик функцій для розрахунку результату
    int lastMultipleOf7 = findLastMultipleOf7(start, end);
    printf("Останнє число в діапазоні, що ділиться на 7 без залишку: %d\n", lastMultipleOf7);

    calculateRatio(n, arr);

    return 0;
}
