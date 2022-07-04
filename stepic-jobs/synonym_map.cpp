/*

Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову. Все слова в словаре различны.
Для одного данного слова определите его синоним.

Входные данные

Программа получает на вход количество пар синонимов N. Далее следует N строк, каждая строка содержит ровно два слова-синонима. После этого следует одно слово.

Выходные данные

Программа должна вывести синоним к данному слову.

*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map <string, string> s;
    map<string,string>::iterator it;
    pair<map<string,string>::iterator,bool> ret;
    string first, second, word;
    int c = 0;
    
    cin >> c;
      for (int i=0; i < c; ++i){
    cin >> first;
    cin >> second;
    ret = s.insert(pair<string,string>(first,second));
      }
   
    cin >> word;
    for (auto now : s) {
        if (now.first == word) cout << now.second;
        if (now.second == word) cout << now.first;
    }
    return 0;
}
