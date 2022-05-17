/*

Симметричное число

Дано четырехзначное число. Определите, является ли его десятичная запись симметричной. Если число симметричное, то выведите 1, иначе
выведите любое другое целое число. Число может иметь меньше четырех знаков, тогда нужно считать, что его десятичная запись дополняется 
слева незначащими нулями.

Формат входных данных

Вводится единственное число.

Формат выходных данных

Выведите одно целое число - ответ на задачу.

*/

#include <iostream>
using namespace std;

int main() {
    // put your code here
    int N = 0;
    cin >> N;
    cout << (((N / 1000) * 10 + N % 10) % 11 + ((N % 1000) / 10) % 11) + 1 ;
    return 0;
}