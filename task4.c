#include <stdio.h>

int main() {
    float distance1 = 120, time1 = 2;
    float distance2 = 80, time2 = 1;

    float totalDistance = distance1 + distance2;
    float totalTime = time1 + time2;

    float averageSpeed = totalDistance / totalTime;

    printf("Середня швидкість: %.2f км/год\n", averageSpeed);
    return 0;
}
