/*
 Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке,
 в котором они встречаются в списке.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

*/

#include <iostream>
#include <vector>

int main() {
  // put your code here
  int n = 0;
  bool alone = true;
  std::cin >> n;
  std::vector <int> a(n);
    for (int i = 0; i < n; ++i) {
     std::cin >> a[i];   
    }
   for (int i = 0; i < n; ++i) {
       for (int j = 0; j < n; ++j){
         if (j == i) continue;
         if (a[j] == a[i]) { alone = false; break; }
       }
       if (alone == true)  std::cout << a[i] << " ";
       alone = true;
   }
  return 0;
}
