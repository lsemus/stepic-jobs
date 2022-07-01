/*

Найдите в данной строке самое длинное слово и выведите его.

Входные данные

Вводится одна строка. Слова в ней отделены одним пробелом.

Выходные данные

Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.

Sample Input:

Everyone of us has all we need
Sample Output:

Everyone

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int counter = 0;
    string s, maxs = "", temp= "";
    getline(cin, s);
    s += ' ';
    for(auto a : s)
    {
        if(a == ' ')
        {
            if(maxs.size() < counter)
            {
                maxs = temp;
            }
            temp = "";
            counter = 0;
        }
        else
        {
            temp += a;
            counter++;
        }
    }
    cout << maxs;
    return 0;
}
