/*

Дано число n, не превышающее 100. Создайте массив размером n×n и заполните его по следующему правилу. 
На главной диагонали должны быть записаны числа 0. На двух диагоналях, прилегающих к главной, числа 1. 
На следующих двух диагоналях числа 2, и т.д. Выведите полученный массив на экран, разделяя элементы массива пробелами.

*/

#include <iostream>
#include <vector>
#include <cmath>

int main() {
  // put your code here
    int n = 0;
    
    std::cin >> n;
    std::vector<std::vector<int>> a(n, std::vector<int>(n));
    
       
    //обработка
    for (int i = 0; i < n; ++i) {
      for (int j = i; j < n; ++j) {
          a[i][j] = j - i;
        }
    }
    
    for (int i = n - 1; i > -1; --i) {
      for (int j = i; j > -1; --j) {
          a[i][j] = i - j;
        }
    }
    
    
    //вывод
    
    for (int i = 0; i < n; i++) { 
    for (int j = 0; j < n; j++) { 
        std::cout << a[i][j] << " ";
    }
        std::cout << std::endl;
    }
    
  return 0;
}
