/*

Последовательность Фибоначчи определяется так: 

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является, то есть выведите такое число N, что F(N) = A. 
Если А не является числом Фибоначчи, выведите число -1.

Формат входных данных
Вводится натуральное число A > 1.

Формат выходных данных
Выведите ответ на задачу.

*/

#include <iostream>

int main() {
  // put your code here 
    int fn = 2;
    int i = 3;
    int fn_1 = 2;
    int fn_2 = 1;
    int a = 0;
       
    std::cin >> a;
    
    if (a == 0) { std::cout << 0; }
    
    while (fn <= a) {
        if (fn == a) {std::cout << i; break;}
        fn = fn_1 + fn_2;
        fn_2 = fn_1;
        fn_1 = fn;
        i += 1;
    }

   if (fn !=  a) std::cout << -1;
    
  return 0;
}
