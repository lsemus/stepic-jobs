/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”, как показано в примере.
Формат входных данных
Вводятся два числа n и m, не превышающие 100.
Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
*/

#include <iostream>
#include <vector>

int main() {
  // put your code here

   int n = 0, m = 0;

    std::cin >> n >> m;
   std::vector<std::vector<int>> a(n, std::vector<int>(m));

   //обработка

    int x = 1, y = 0, i = 2, xmax = 1, ymax = 0;

    a[0][0] = 1;

    while (i <= n * m) {

        if (n == 1 || m == 1) break;

         if (x == m-1) {
            a[y][x] = i;
            ymax = y;
            xmax = x;
            --x; ++y; ++i;
            continue;
         }


             //на верхней строке, идём на юго запад
         if (y == 0){
             xmax = x;// максимальное х которое мы записывали
             a[y][x] = i;
             --x; ++y;// идем на югозапад
             ++i;
             continue;
         }

         //на первом столбце, возвращаемся на 0ю строку,
         if (x == 0) {
             a[y][x] = i;
             if (xmax == m-1) {x=m-1; y=ymax+1;}
             else {x=xmax+1; y=0;}
             ++i;
             continue;
         }

         if (y == n-1){
             a[y][x] = i;
             if (xmax == m-1){x=m-1; y=ymax+1; ymax = y;}
             else {x=xmax+1; y=0;}
             ++i;
             continue;
         }

         a[y][x] = i;
         --x; ++y; ++i;

    }

    if (n == 1) {
        for (int j = 0; j < m; j++) a[0][j] = j+1;
    }

    if (m == 1) {
        for (int j = 0; j < n; j++) a[j][0] = j+1;
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
