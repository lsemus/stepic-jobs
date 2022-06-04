*/
  
  Определите для класса Rational операторы сложения, вычитания, умножения и деления, так чтобы объекты типа Rational можно было складывать
  (вычитать, умножать и делить) не только друг с другом но и с целыми числами.

Требования к реализации: ваш код не должен вводить или выводить что-либо, реализовывать функцию main не нужно.
  
  (Реализуем вне класса).
  
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
        
private:
    int numerator_;
    int denominator_;
};

Rational operator+(Rational r, const Rational rational) { 
        r.add(rational);            
        return r; 
    }
    Rational operator+(Rational r, int d)                      { 
        r.add(Rational(d));         
        return r; 
    }
    
    Rational operator-(Rational r, const Rational rational) { 
        r.sub(rational);            
        return r; 
    }
    Rational operator-(Rational r, int d)                      { 
        r.sub(Rational(d));         
        return r; 
    }
    
    Rational operator*(Rational r, const Rational rational) { 
        r.mul(rational);            
        return r; 
    }
    Rational operator*(Rational  r, int d)                      { 
        r.mul(Rational(d));         
        return r; 
    }
    Rational operator/(Rational r, const Rational rational) { 
        r.div(rational);            
        return r; 
    }
    Rational operator/(Rational r, int d)                      { 
        r.div(Rational(d));         
        return r; 
    }
