/*

По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”, как показано в примере.

Формат входных данных
Вводятся два числа n и m, каждое из которых не превышает 30.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

*/

#include <iostream>
#include <vector>

int main() {
  // put your code here
    int n = 0, m = 0, c = 1;
    
    std::cin >> n >> m; 
    std::vector<std::vector<int>> a(n, std::vector<int>(m));
          
    //обработка
     for (int i = 0; i < n; ++i) {
         if (i == 0 || i%2 == 0) {
      for (int j = 0; j < m; ++j) {
          a[i][j] = c++;
        }
         }
        else {
         for (int j = m-1; j > -1; --j) {
          a[i][j] = c++;
        }   
        }
            
            
    }        
    //вывод
    
    for (int i = 0; i < n; i++) { 
    for (int j = 0; j < m; j++) {
        if (a[i][j] < 10) std::cout << "   " << a[i][j];
        if (a[i][j] > 9 && a[i][j] < 100) std::cout << "  " << a[i][j];
        if (a[i][j] > 99 && a[i][j] < 1000) std::cout << " " << a[i][j];
    }        
        std::cout << std::endl;
    }
    
  return 0;
}
