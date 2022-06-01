*/
 
Определите наименьшее расстояние между двумя локальными максимумами последовательности натуральных чисел, завершающейся числом 0. 
  Если в последовательности нет двух локальных максимумов, выведите число 0.

Начальное и конечное значение при этом локальными максимумами не считаются.

Расстоянием считается количество пробелов между элементами. В качестве примера смотрите первый тест.
  
Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
  
Формат выходных данных
Выведите ответ на задачу.
   
  /*
  
  #include <iostream>

int main() {
  // put your code here
    int pprev_n = -1;
    int prev_n = -1;
    int n = -1;
    int max_counter = 0;
    int index = 0;
    int prev_max = -1;
    int cur_max = -1;
    int dist = 0;

 while (n != 0) {

   pprev_n = prev_n;
   prev_n = n;
   std::cin >> n;
   index += 1;
   if (pprev_n == -1) continue;
   if (n == 0) break;
   if (prev_n > n && prev_n > pprev_n) {
       ++max_counter;
       if (max_counter > 1) prev_max = cur_max;
       cur_max = index - 1;
       if (max_counter > 2 && (cur_max - prev_max) < dist) dist = cur_max - prev_max;
       if (max_counter == 2) dist = cur_max - prev_max;
   }
}
 if (max_counter < 2) std::cout << 0;
 else std::cout << dist;
  return 0;
}
