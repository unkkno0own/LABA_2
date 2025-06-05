#include <stdio.h>

int main() {
    int a, b;
    printf("Введіть два числа: ");
    scanf("%d %d", &a, &b);

    // Обмін значень без третьої змінної
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Після обміну: a = %d, b = %d\n", a, b);
    return 0;
}
