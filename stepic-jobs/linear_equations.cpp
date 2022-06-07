/*

Даны вещественные числа a, b, c, d, e, f. Известно, что система линейных уравнений
имеет ровно одно решение. Выведите два числа x и y, являющиеся решением этой системы.

Формат входных данных
Вводятся шесть чисел - коэффициенты уравнений системы.

Формат выходных данных
Выведите ответ на задачу.

*/

#include <iostream>

int main() {
  // put your code here
    double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    double x = 0, y = 0;
    std::cin >> a >> b >> c >> d >> e >> f; 
    if (a == 0) {
        y = e / b;
        x = (f - d * y) / c;
        std::cout << x << " " << y;
        return 0;
    }
    if (b == 0) {
        x = e / a;
        y = (f - c * x) / d;
        std::cout << x << " " << y;
        return 0;
    }
     if (c == 0) {
        y = f / d;
        x = (e - b * y) / a;
        std::cout << x << " " << y;
        return 0;
    }
    if (d == 0) {
        x = f / c;
        y = (e - a * x) / b;
        std::cout << x << " " << y;
        return 0;
    }
    double delta = a * d - b * c;
    double deltaX = e * d - f * b;
    double deltaY = a * f - e * c;
    y = deltaY / delta;
    x = deltaX / delta;
    std::cout << x << " " << y;
  return 0;
}
