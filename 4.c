#include <stdio.h>
#include <math.h>

double f(double x) {
    // Визначення функції f(x)
    return x * 3;
}

int main() {
    double a = -6;     // Початок інтервалу
    double b = 3;      // Кінець інтервалу
    double dx = 0.75;  // Крок

    printf("Результати обчислення функції y = f(x) на проміжку [%.2f, %.2f] з кроком %.2f:\n", a, b, dx);
    printf("x\t\ty = f(x)\n");

    double x = a;
    while (x <= b) {
        double y;

        // Обчислення значення функції y = f(x)
        // Тут можна додати перевірки на виникнення виключних ситуацій, наприклад, ділення на нуль або корінь з від’ємного числа.
        y = f(x);

        printf("%.2f\t\t%.2f\n", x, y);
        x += dx;
    }

    return 0;
}
