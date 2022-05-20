 /* 
 Яша плавал в бассейне размером N×M метров и устал. В этот момент он обнаружил, что находится на расстоянии X метров от одного из длинных бортиков (не обязательно от ближайшего) и Y метров от одного из коротких бортиков. Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик?
Формат входных данных
Программа получает на вход числа N, M, X, Y.
Формат выходных данных

Программа должна вывести число метров, которое нужно проплыть Яше до бортика.

*/

#include <iostream>

int main() {
  // put your code here
    int n, m, x, y = 0;
    int minx, miny = 0;
    std::cin >> n >> m >> x >> y;
    
   
    if (n >= m) { 
        if (x <= (m - x)) minx = x; else minx = m - x; 
        if (y <= (n - y)) miny = y; else miny = n - y;
        if (minx <= miny) std::cout << minx; 
            else std::cout << miny;
    }
    else if (m >= n) { 
        if (x <= (n - x)) minx = x; else minx = n - x;
        if (y <= (m - y)) miny = y; else miny = m - y;
        if (minx <= miny) std::cout << minx; 
            else std::cout << miny;
    }
    
  return 0;
}
