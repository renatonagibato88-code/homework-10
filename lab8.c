#include <stdio.h>

int main() {
    int N;
    double sum = 0.0;

    printf("Введите целое число N: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Ошибка: N должно быть целым положительным числом.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        sum = sum + 1.0 / i;
    }

    printf("sum = %.6lf\n", sum);

    return 0;
}
