#include <iostream>

void foo(char) { std::cout << "char" << std::endl; }
void foo(signed char) { std::cout << "signed char" << std::endl; }
void foo(unsigned char) { std::cout << "unsigned char" << std::endl; }


int main()
{

foo('a'); // char
//foo(97); //ошибка компиляции

return 1;
}
