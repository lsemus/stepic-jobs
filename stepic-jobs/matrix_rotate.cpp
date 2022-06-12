/*

Дан прямоугольный массив размером n×m. Поверните его на 90 градусов по часовой стрелке, записав результат в новый массив размером m×n.

Формат входных данных

Вводятся два числа n и m, не превосходящие 100, затем массив размером n×m.

Формат выходных данных

Выведите получившийся массив. Числа при выводе разделяйте одним пробелом.

*/

#include <iostream>
#include <vector>

int main() {
  // put your code here
    int n = 0, m = 0;
    
    std::cin >> n >> m; 
    std::vector<std::vector<int>> origin(n, std::vector<int>(m));
    std::vector<std::vector<int>> result(m, std::vector<int>(n));
    
    // ввод
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
          std::cin >> origin[i][j];
        }
    }
       
    //обработка
     for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
          result[j][i] = origin[n-i-1][j];
        }
    }        
    //вывод
    
    for (int i = 0; i < m; i++) { 
    for (int j = 0; j < n; j++) { 
        std::cout << result[i][j] << " ";
    }        
        std::cout << std::endl;
    }
    
  return 0;
}
