*/

Элемент последовательности называется локальным максимумом, если он строго больше предыдущего и последующего элемента последовательности. 
  Первый и последний элемент последовательности не являются локальными максимумами.

Дана последовательность натуральных чисел, завершающаяся числом 0. Определите количество строгих локальных максимумов в этой последовательности.
  
Формат входных данных
Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу.
  
/*

#include <iostream>

int main() {
  // put your code here
  int pprev_n = -1;
    int prev_n = -1;
    int n = -1;
    int counter = 0;

 while (n != 0) {

   pprev_n = prev_n;
   prev_n = n;
   std::cin >> n;
   if (pprev_n == -1) continue;
   if (n == 0) break;
   if (prev_n > n && prev_n > pprev_n) ++counter;
}
 std::cout << counter;

return 0;
}
