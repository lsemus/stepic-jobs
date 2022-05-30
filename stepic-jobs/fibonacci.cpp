/*


Последовательность Фибоначчи определяется так:

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

По данному числу N определите N-е число Фибоначчи F(N).

Формат входных данных
Вводится натуральное число N.

Формат выходных данных
Выведите ответ на задачу.


*/

#include <iostream>

int main() {
  // put your code here
    int n = 0;
    int fn = 0;
    int i = 2;
    int fn_1 = 1;
    int fn_2 = 0;
    std::cin >> n;
    if (n == 0) { std::cout << 0; return 0; }
    if (n == 1) { std::cout << 1; return 0; }
    while (i <= n) {
        fn = fn_1 + fn_2;
        fn_2 = fn_1;
        fn_1 = fn;
        i += 1;
    }
   
   std::cout << fn;
  return 0;
}
