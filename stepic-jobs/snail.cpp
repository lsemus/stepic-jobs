/*

Улитка

Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров, а за ночь спускаясь на B метров.
На какой день улитка доползет до вершины шеста?

Формат входных данных

Программа получает на вход целые неотрицательные числа H, A, B, причем H > B. Числа не превосходят 100.

Формат выходных данных

Программа должна вывести одно натуральное число. Гарантируется, что A > B.


*/

#include <iostream>
using namespace std;

int main() {
    // put your code here
    int h, a, b = 0;
    cin >> h >> a >> b;
    cout << (h - 2 * b + a - 1) / (a-b);
    return 0;
}
