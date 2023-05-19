#include <stdio.h>

int main() {
    int sum = 0;
    int count = 0;
    float average;

    for (int i = 0; i <= 30; i++) {
        sum += i;
        count++;
    }

    average = (float) sum / count;

    printf("Середнє арифметичне: %.2f\n", average);

    return 0;
}
