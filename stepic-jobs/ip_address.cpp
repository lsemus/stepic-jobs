/*
В сети интернет каждому компьютеру присваивается четырехбайтовый код, который принято записывать в виде четырех чисел, каждое из которых может принимать значения от 0 до 255, разделенных точками. Вот примеры правильных IP-адресов:
127.0.0.0
192.168.0.1
255.0.255.255
Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.

Входные данные

Программа получает на вход строку из произвольных символов.

Выходные данные

Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.

Примечание

Для перевода из строки в число удобно пользоваться функцией stoi, которая принимает на вход строку, а возвращает число.

Sample Input:

127.0.0.1
Sample Output:

YES




*/

#include <iostream>
#include <string>

using namespace std;
void getSubstr(string &s, string &temps) {
s = temps.substr(0,temps.find('.'));
    temps.erase(0,temps.find('.')+1);
}
bool isValid(string s, int i){
if (i < 10 && s.size()>1) return false;
if (i < 100 && s.size()>2) return false;
return true;
}

int main()
{
    string s="", temps="", s1="", s2 ="", s3 ="", s4="";
    int i1 = 0, i2 = 0, i3 = 0, i4 = 0;
    int counter = 0;
    getline(cin, s);
    int len = s.size();
    if (len < 7 || len > 15) {cout << "NO"; return 0;}
    if (s.empty()) {cout << "NO"; return 0;}
    for (auto c:s){
        if ( c == '.') {++counter; continue;}
        else if ( c >= '0' && c <= '9') continue;
        else {cout << "NO"; return 0;}
    }
    if ( counter != 3) {cout << "NO"; return 0;}
    temps = s;
    getSubstr(s1, temps);
    getSubstr(s2, temps);
    getSubstr(s3, temps);
    s4 = temps;

    if (s1.size() == 0) {cout << "NO"; return 0;} 
    if (s2.size() == 0) {cout << "NO"; return 0;} 
    if (s3.size() == 0) {cout << "NO"; return 0;} 
    if (s4.size() == 0) {cout << "NO"; return 0;}
    
    i1 = stoi(s1);
    i2 = stoi(s2);  
    i3 = stoi(s3);
    i4 = stoi(s4);
    
    if (!isValid(s1,i1)) {cout << "NO"; return 0;}
    if (!isValid(s2,i2)) {cout << "NO"; return 0;}
    if (!isValid(s3,i3)) {cout << "NO"; return 0;}
    if (!isValid(s4,i4)) {cout << "NO"; return 0;}


    if (i1 >= 0 && i1 <= 255) {
    if (i2 >= 0 && i2 <= 255){
    if (i3 >= 0 && i3 <= 255){
    if (i4 >= 0 && i4 <= 255){
           cout << "YES"; return 0;
    }
    }
    }
    }
cout << "NO";

    return 0;
}
