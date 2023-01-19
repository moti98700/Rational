#include "Rational.hpp"
#include <iostream>

using namespace std;

Rational::Rational(int a)
{
    this->m_numer = a;
    this->m_denom = 1;
    value();
}

Rational::Rational(int a, int b)
{
    if (b == 0)
    {
        cout << "eroor: Denominator cannot be equal to zero";
        exit(0);
    }
    else
    {
        this->m_numer = a;
        this->m_denom = b;
    }
    value();
}
double Rational::value() const
{

    double d = 1.0 * m_numer;
    return d / m_denom;
}

Rational Rational::mul(int n) const
{
    Rational r(this->m_numer * n, this->m_denom);
    return r;
}

Rational Rational::div(int n) const
{
    Rational r(this->m_numer, this->m_denom * n);
    return r;
}

Rational Rational::add(int n) const
{
    Rational r(n * this->m_denom + this->m_numer, this->m_denom);
    return r;
}

Rational Rational::sub(int n) const
{
    Rational r(this->m_numer - (n * this->m_denom), this->m_denom);
    return r;
}

Rational Rational::mul(Rational n) const
{
    Rational r(this->m_numer * n.m_numer, this->m_denom * n.m_denom);
    return r;
}

Rational Rational::div(Rational n) const
{
    Rational r(this->m_numer * n.m_denom, this->m_denom * n.m_numer);
    return r;
}

Rational Rational::add(Rational n) const
{
    Rational r(this->m_numer * n.m_denom + n.m_numer * this->m_denom, this->m_denom * n.m_denom);
    return r;
}

Rational Rational::sub(Rational n) const
{
    Rational r(this->m_numer * n.m_denom - n.m_numer * this->m_denom, this->m_denom * n.m_denom);
    return r;
}

Rational Rational::operator*(int n) const
{
    Rational r(this->m_numer * n, this->m_denom);
    return r;
}

Rational Rational::operator/(int n) const
{
    Rational r(this->m_numer, this->m_denom * n);
    return r;
}

Rational Rational::operator+(int n) const
{
    Rational r(n * this->m_denom + this->m_numer, this->m_denom);
    return r;
}

Rational Rational::operator-(int n) const
{
    Rational r(this->m_numer - (n * this->m_denom), this->m_denom);
    return r;
}

Rational Rational::operator*(Rational n) const
{
    Rational r(this->m_numer * n.m_numer, this->m_denom * n.m_denom);
    return r;
}

Rational Rational::operator/(Rational n) const
{
    Rational r(this->m_numer * n.m_denom, this->m_denom * n.m_numer);
    return r;
}

Rational Rational::operator+(Rational n) const
{
    Rational r(this->m_numer * n.m_denom + n.m_numer * this->m_denom, this->m_denom * n.m_denom);
    return r;
}

Rational Rational::operator-(Rational n) const
{
    Rational r(this->m_numer * n.m_denom - n.m_numer * this->m_denom, this->m_denom * n.m_denom);
    return r;
}

void Rational::operator*=(int n)
{
    this->m_numer = this->m_numer * n;
}

void Rational::operator/=(int n)
{
    this->m_denom = this->m_denom * n;
}

void Rational::operator+=(int n)
{
    this->m_numer = this->m_numer + n * this->m_denom;
}

void Rational::operator-=(int n)
{
    this->m_numer = m_numer - n * this->m_denom;
}

void Rational::operator*=(Rational n)
{
    this->m_numer = this->m_numer * n.m_numer;
    this->m_denom = this->m_denom * n.m_denom;
}
void Rational::operator/=(Rational n)
{
    this->m_numer = this->m_numer * n.m_denom;
    this->m_denom = this->m_denom / n.m_numer;
}

void Rational::operator+=(Rational n)
{
    this->m_numer = this->m_numer * n.m_denom + n.m_numer * this->m_denom;
    this->m_denom = this->m_denom * n.m_denom;
}

void Rational::operator-=(Rational n)
{
    this->m_numer = this->m_numer * n.m_denom - n.m_numer * this->m_denom;
    this->m_denom = this->m_denom * n.m_denom;
}

bool Rational::operator>(int n) const
{
    if (this->value() > n)
    {
        return true;
    }
    return false;
}

bool Rational::operator<(int n) const
{
    if (this->value() < n)
    {
        return true;
    }
    return false;
}

bool Rational::operator!=(int n) const
{
    if (this->value() != n)
    {
        return true;
    }
    return false;
}

bool Rational::operator<=(int n) const
{
    if (this->value() <= n)
    {
        return true;
    }
    return false;
}

bool Rational::operator>=(int n) const
{
    if (this->value() >= n)
    {
        return true;
    }
    return false;
}

bool Rational::operator<(Rational n) const
{
    if (this->value() < n.value())
    {
        return true;
    }
    return false;
}

bool Rational::operator>(Rational n) const
{
    if (this->value() > n.value())
    {
        return true;
    }
    return false;
}

bool Rational::operator!=(Rational n) const
{
    if (this->value() != n.value())
    {
        return true;
    }
    return false;
}

bool Rational::operator<=(Rational n) const
{
    if (this->value() <= n.value())
    {
        return true;
    }
    return false;
}

bool Rational::operator>=(Rational n) const
{
    if (this->value() >= n.value())
    {
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &os, Rational r)
{
    os << r.value();
    return os;
}

int main()
{
    Rational a(-4, 2);
    Rational b(6, -2);
    cout << a << "/" << b << " = " << a / b << endl;
    cout << a << "*" << b << " = " << a * b << endl; 
}