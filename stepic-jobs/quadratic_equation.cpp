/*

Даны действительные коэффициенты a, b, c, при этом a ≠ 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.

Формат входных данных
Вводятся три действительных числа.

Формат выходных данных
Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.

*/

#include <iostream>
#include <cmath>

int main() {
  // put your code here
    double a = 0, b = 0, c = 0;
    double d = 0;
    double x1 = 0, x2 = 0;
    std::cin >> a >> b >> c;
    d = pow(b,2) - (4 * a * c);
    if (d == 0) std::cout << -b /(2 * a);
    else if (d < 0) return 0;
    else { 
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        if (x1 < x2) std::cout << x1 << " " << x2;
        else std::cout << x2 << " " << x1;
    }
  return 0;
}