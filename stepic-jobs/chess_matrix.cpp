/*

Даны числа n и m. Заполните массив размером n × m в шахматном порядке: клетки одного цвета заполнены нулями, а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. В левом верхнем углу записано число 1.
Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

*/


#include <iostream>
#include <vector>

int main() {
  // put your code here
     
 int n = 0, m = 0, counter = 1;

   std::cin >> n >> m;
   std::vector<std::vector<int>> a(n, std::vector<int>(m));
    //обработка
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        if (i == 0 && j == 0) {a[i][j] = counter; ++counter; continue;}
        if (j != 0 && a[i][j-1] == 0) {a[i][j] = counter; ++counter;}
        else if (j == 0 && a[i-1][j] == 0)  {a[i][j] = counter; ++counter;}
        else { a[i][j] = 0;}
    }
    }

    //вывод

    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        std::cout.width(4);
        std::cout << a[i][j];
    }
        std::cout << std::endl;
    }


  return 0;
}
