/*

 Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

*/

#include <iostream>
#include <vector>

int main() {
  // put your code here
  int n;
  std::cin >> n;
  std::vector <int> a(n);
    for (int i = 0; i < n; ++i) {
     std::cin >> a[i];   
     if (i == 0 || i%2 == 0) std::cout << a[i] << " ";
    }
    
  return 0;
}