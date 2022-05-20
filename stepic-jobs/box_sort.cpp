/* 
Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.
Формат входных данных
Программа получает на вход числа A1, B1, C1, A2, B2, C2.
Формат выходных данных
Программа должна вывести одну из следующих строчек:
Boxes are equal, если коробки одинаковые,
The first box is smaller than the second one, если первая коробка может быть положена во вторую,
The first box is larger than the second one, если вторая коробка может быть положена в первую,
Boxes are incomparable, во всех остальных случаях.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, x, y, z, t;
    cin >> a >> b >> c >> x >> y >> z;
    if (a > b) t = a, a = b, b = t;
    if (b > c) t = b, b = c, c = t;
    if (a > b) t = a, a = b, b = t;
    if (x > y) t = x, x = y, y = t;
    if (y > z) t = y, y = z, z = t;
    if (x > y) t = x, x = y, y = t;
    if (a == x && b == y && z == c) cout << "Boxes are equal";
    else if (a <= x && b <= y && c <= z) cout << "The first box is smaller than the second one";
    else if (a >= x && b >= y && c >= z) cout << "The first box is larger than the second one";
    else cout << "Boxes are incomparable";
    return 0;
}
