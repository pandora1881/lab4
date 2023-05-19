#include <stdio.h>

int main() {
    int x = 5;  // Задане ціле число x
    double sum = 0.0;  // Змінна для збереження суми

    for (int i = 1; i <= 10; i++) {
        for (int j = i; j <= 10; j++) {
            sum += (i + 2.0) / (j + x);
        }
    }

    printf("Сума: %.2lf\n", sum);

    return 0;
}
