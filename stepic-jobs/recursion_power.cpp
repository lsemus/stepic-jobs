/*
Дано действительное положительное число a и целоe число n.

Вычислите an. Решение оформите в виде рекурсивной функции power(a, n).

Формат входных данных
Вводится действительное положительное число a и целоe число n.

Формат выходных данных
Выведите ответ на задачу.

*/

#include <iostream>
#include <cmath>
double power(double a, int n) {
     if (n == 0) {
        return 1;
    }
    return a*power(a,n-1);
}
int main() {
  // put your code here
    double a = 0;
    int n = 0;
    std::cin >> a >> n;
    if (n >= 0) std::cout << power(a,n);
    if (n < 0) std::cout << 1/power(a,abs(n));
  return 0;
}
