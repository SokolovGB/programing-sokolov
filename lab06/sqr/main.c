#include <stdio.h>

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Некоректний розмір масиву.\n");
        return 1;
    }

    int arr[n];

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 1) {
        printf("Масив складається з одного елементу. Немає відношення.\n");
        return 0;
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

    return 0;
}
