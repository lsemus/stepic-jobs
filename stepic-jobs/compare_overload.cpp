*/
  

Еще одна важная группа операторов, которые полезно реализовать для класса рациональных чисел — это операторы сравнения.
  Реализуйте операторы <, <=, >, >=, ==, != для класса Rational так, чтобы можно было сравнивать объекты класса Rational не
  только друг с другом, но и с целыми числами.

При решении задания не используйте метод to_double, он введен в класс, в первую очередь, для удобства тестирования. 
  Вы можете определять любые вспомогательные методы или функции если необходимо.

Требования к реализации: ваш код не должен вводить или вводить что-либо, реализовывать функцию main не нужно.
  
  /*
  
  struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational& operator+=(Rational rational);
    Rational& operator-=(Rational rational);
    Rational& operator*=(Rational rational);
    Rational& operator/=(Rational rational);

    Rational operator-() const;
    Rational operator+() const;
    
    int getNumerator() {  return numerator_; }
    int getDenominator() { return denominator_; }
    
private:
    int numerator_;
    int denominator_;
};

Rational operator+(Rational lhs, Rational rhs);
Rational operator-(Rational lhs, Rational rhs);
Rational operator*(Rational lhs, Rational rhs);
Rational operator/(Rational lhs, Rational rhs);

bool operator==(Rational a, Rational b) {
    if ((a.getNumerator() == b.getNumerator()) && (a.getDenominator() == b.getDenominator())) return true;
    else return false;
}
bool operator==(Rational a, int i) {
    double x = a.getNumerator() / a.getDenominator();
    if ((int)x == i) return true;
    else return false;
}
bool operator==(int i, Rational a) {
    return a == i;
} 

bool operator!=(Rational a, Rational b) {
    return !(a == b);
}

bool operator!=(Rational a, int i) {
    return !(a == i);
}

bool operator!=(int i, Rational a) {
    return !(a == i);
}
        
bool operator<(Rational a, Rational b) {
     int x = a.getNumerator() * b.getDenominator();
        int y = b.getNumerator() * a.getDenominator();
        if (x < y ) return true;
        else return false;
}
    
bool operator<(Rational a, int i) {
        int x = i * a.getDenominator();
        if ( a.getNumerator() <  x) return true;
        else return false;
    }

bool operator<(int i, Rational a) {
        int x = i * a.getDenominator();
        if ( x < a.getNumerator()) return true;
        else return false;
    }
    
bool operator>(Rational a, Rational b) {
        return b < a;
    }
    
bool operator>(Rational a, int i) {
        return i < a;
    }

bool operator>(int i, Rational a) {
        return a < i;
    }  

bool operator<=(Rational a, Rational b) {
        return !(a > b);
    }
    
bool operator<=(Rational a, int i) {
        return !(a > i);
    }

bool operator<=(int i, Rational a) {
        return !(i > a);
    } 

bool operator>=(Rational a, Rational b) {
        return !(a < b);
    }
    
bool operator>=(Rational a, int i) {
        return !(a < i);
    }

bool operator>=(int i, Rational a) {
        return !(i < a);
    } 
