#include <iostream>
#include <vector>

int main() {
  // put your code here

   int n = 0, m = 0;

    std::cin >> n >> m;
   std::vector<std::vector<int>> a(n, std::vector<int>(m));

   //обработка

    int x = 1, y = 0, i = 2;
    bool stepOk = true;
    bool goSW = false, goNE = false;

    a[0][0] = 1;

    while (i <= n * m) {

         if ((y == 0 && x < m-1) && stepOk == true){
             a[y][x] = i;
             --x; ++y;
             goSW = true;
             stepOk = false;
             ++i;
             continue;
         }

         if ((y == 0 && x < m-1) && stepOk == false){
             a[y][x] = i;
             ++x;
             stepOk = true;
             goNE = false;
             ++i;
             continue;
         }

         if ((y == 0 && x == m-1) && stepOk == false){
             a[y][x] = i;
             ++y;
             stepOk = true;
             ++i;
             continue;
         }

         if ((x == 0 && y == n-1) && stepOk == false) {
             a[y][x] = i;
             ++x;
             stepOk = true;
             ++i;
             continue;
         }

         if ((x == 0 && y == n-1) && stepOk == true) {
             a[y][x] = i;
             ++x;
             --y;
             stepOk = false;
             goNE = true;
             ++i;
             continue;
         }

          if ((x == 0 && y < n-1) && stepOk == false) {
             a[y][x] = i;
             ++y;
             goSW = false;
             stepOk = true;
             ++i;
             continue;
         }

          if ((x == 0 && y < n-1) && stepOk == true) {
             a[y][x] = i;
             --y; ++x;
             goNE = true;
             stepOk = false;
             ++i;
             continue;
         }

            if ((x==m-1 && y<n-1) && stepOk == true){
            a[y][x] = i;
             --x; ++y;
             stepOk = false;
             goSW = true;
             ++i;
             continue;
        }

         if ((x==m-1 && y<n-1) && stepOk == false){
            a[y][x] = i;
             ++y;
             stepOk = true;
             goNE = false;
             ++i;
             continue;
        }

        if ((y==n-1 && x<m-1) && stepOk == false){
            a[y][x] = i;
             ++x;
             stepOk = true;
             ++i;
             continue;
        }

        if ((y==n-1 && x<m-1) && stepOk == true){
            a[y][x] = i;
             ++x; --y;
             stepOk = false;
             goNE = true;
             goSW = false;
             ++i;
             continue;
        }

        if ((y==n-1 && x==m-1)){
            a[y][x] = i;
             break;
        }

         if (goSW) {
             a[y][x] = i;
             --x;
             ++y;
             ++i;
             continue;
             }

         if (goNE) {
             a[y][x] = i;
             ++x;
             --y;
             ++i;
             continue;
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
