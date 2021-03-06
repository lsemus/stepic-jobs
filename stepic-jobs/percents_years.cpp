*/
   Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада через год. 
  Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.
  
Формат входных данных
Программа получает на вход целые числа P, X, Y, K .
  
Формат выходных данных
Программа должна вывести два числа: величину вклада через K лет в рублях и копейках. Дробное число копеек по истечение года отбрасывается.
  Перерасчет суммы вклада (с отбрасыванием дробных частей копеек) происходит ежегодно.
  
Примечание
В этой задаче часто возникают проблемы с точностью. Если они возникли у вас - попробуйте решить задачу в целых числах.
 
  /*
  
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // put your code here
    double p = 0, x = 0, y = 0, res = 0;
    int i = 0, k = 0;
    
    std::cin >> p >> x >> y >> k;
    
    double a0 = x * 100 + y; // переводим все в копейки
    double percents = (1 + p / 100); // считаем проценты
    res = a0;
    
    while (i < k){
        res = trunc(res * percents); //отсекаем копейки каждый год
        ++i;
    }
    double kopek = trunc(res); //результат в копейках
    double roubles = trunc(kopek / 100); // рублей в копейках
    kopek = kopek - roubles * 100;// копеек осталось
    std::cout << roubles << " " << kopek;
  return 0;
}
