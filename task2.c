#include <stdio.h>

int main() {
    int quantity;
    float price, total;

    printf("Введіть кількість товарів: ");
    scanf("%d", &quantity);

    printf("Введіть ціну за одиницю: ");
    scanf("%f", &price);

    total = quantity * price;

    printf("Загальна вартість: %.2f\n", total);
    return 0;
}
