/*
Во входной строке записана последовательность чисел через пробел. Для каждого числа выведите слово YES (в отдельной строке), 
если это число ранее встречалось в последовательности или NO, если не встречалось.

Входные данные

Вводится число N - количество элементов списка, а затем N чисел.

Выходные данные

Выведите ответ на задачу.

Sample Input:

6
1 2 3 2 3 4
Sample Output:

NO
NO
NO
YES
YES
NO

*/

#include <iostream>
#include <set>

using namespace std;

int main() {
  // put your code here
 multiset <int> s;
int n;
cin >> n;
for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (i == 0) {s.insert(x); cout << "NO" << endl; continue;}
    if (s.find(x) == s.end()) cout << "NO" << endl;
    else cout << "YES" << endl;
    s.insert(x);
}

  return 0;
}
