#ifndef RATIONAL_HPP
#define RATIONAL_HPP

#include <ostream>

struct Rational
{
public:
    Rational(int a);
    Rational(int a, int b);

    double value() const;

    Rational mul(int n) const;
    Rational div(int n) const;
    Rational add(int n) const;
    Rational sub(int n) const;

    Rational mul(Rational r) const;
    Rational div(Rational r) const;
    Rational add(Rational r) const;
    Rational sub(Rational r) const;

    Rational operator*(int) const;
    Rational operator/(int) const;
    Rational operator+(int) const;
    Rational operator-(int) const;

    Rational operator*(Rational r) const;
    Rational operator/(Rational r) const;
    Rational operator+(Rational r) const;
    Rational operator-(Rational r) const;

    void operator*=(int);
    void operator/=(int);
    void operator+=(int);
    void operator-=(int);

    void operator*=(Rational r);
    void operator/=(Rational r);
    void operator+=(Rational r);
    void operator-=(Rational r);

    bool operator>(int) const;
    bool operator<(int) const;
    bool operator!=(int) const;
    bool operator<=(int) const;
    bool operator>=(int) const;

    bool operator>(Rational r) const;
    bool operator<(Rational r) const;
    bool operator!=(Rational r) const;
    bool operator<=(Rational r) const;
    bool operator>=(Rational r) const;

private:
    int m_numer;
    int m_denom;

private:
    int gcd(int m, int n);
};

std::ostream &operator<<(std::ostream &os, Rational r);


/*
2 ctor
make all relevant functions const
add operator overloading
+ - * /
+= -= *= /=

< > !=   <= >=

print
*/

#endif
