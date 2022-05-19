#include <iostream>

void foo(char) { std::cout << "char" << std::endl; }
void foo(signed char) { std::cout << "signed char" << std::endl; }
void foo(unsigned char) { std::cout << "unsigned char" << std::endl; }

float  square(float value) { return value * value; }
// double square(float value) { return (double)value * value; }

int main()
{

foo('a');
// foo(97); // error: call of overloaded ‘foo(int)’ is ambiguous

// double sq = square(2.0); //error ambiguating new declaration of ‘double square(float)’

return 1;
}
