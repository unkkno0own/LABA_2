#include <stdio.h>

int main() {
    int number;
    printf("Введіть тризначне число: ");
    scanf("%d", &number);

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;

    int reversed = units * 100 + tens * 10 + hundreds;

    printf("Число у зворотному порядку: %d\n", reversed);
    return 0;
}
