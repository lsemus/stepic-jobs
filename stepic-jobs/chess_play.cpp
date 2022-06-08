/*
 Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. 
 Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.

Формат входных данных
Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.

Формат выходных данных
Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.

*/

#include <iostream>
#include <vector>

int main() {
  // put your code here
  std::vector <int> array(8);
  int a = 0, b = 0, c = 0, d = 0, x = 0, y = 0;  
  // ввод
  for (int i = 0; i < 7; ++i) {
     std::cin >> x >> y; 
     array[i] = x * 10 + y; 
    }
    
  // обработка
   for (int i = 0; i < 7; ++i) {
       a = array[i] / 10;
       b = array[i] % 10;
       for (int j = i+1; j < 7; ++j){
         c = array[j] / 10;
         d = array[j] % 10;   
         
        if (a == c || b == d) { std::cout << "YES"; return 0;}
        if (a > c && d > b) { 
        int d1 = a - c;
        int d2 = d - b;
        if (d1 == d2) { std::cout << "YES"; return 0;}
    }
    else if (a > c && d < b) { 
        int d1 = a - c;
        int d2 = b - d;
        if (d1 == d2) { std::cout << "YES"; return 0;}
    }
    else if (a < c && d > b) { 
        int d1 = c - a;
        int d2 = d - b;
        if (d1 == d2) { std::cout << "YES"; return 0;}
    }
    else if (a < c && d < b) { 
        int d1 = c - a;
        int d2 = b - d;
        if (d1 == d2) { std::cout << "YES"; return 0;}
    }
       }
   }
  std::cout << "NO";  
  return 0;
}
