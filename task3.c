#include <stdio.h>

int main() {
    int num;
    printf("Введіть ціле число: ");
    scanf("%d", &num);

    int lastDigit = num % 10;
    if (lastDigit < 0)  // для від'ємних чисел
        lastDigit = -lastDigit;

    printf("Остання цифра: %d\n", lastDigit);
    return 0;
}
