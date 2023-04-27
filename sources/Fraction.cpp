
#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include "Fraction.hpp"
using namespace std;
namespace ariel
{
    Fraction::Fraction(){};
    Fraction::Fraction(float number)
    {
        if(number==0){
            throw("the number is zero");
        }
        int num = round(number * 1000);
        int den = 1000;

        int res = gcd(num, den);
        numerator /= res;
        denominator /= res;
    }
    Fraction::Fraction(int n, int d) : numerator(n), denominator(d) {}

    Fraction Fraction::operator+(const Fraction &other) const
    {
        Fraction res;
        return res;
    }
    Fraction Fraction::operator-(const Fraction &other) const
    {
        Fraction res;
        return res;
    }
    Fraction Fraction::operator*(const Fraction &other) const
    {
        Fraction res = Fraction(this->numerator * other.numerator, this->denominator * other.denominator);
        return res;
    }
    Fraction Fraction::operator/(const Fraction &other) const
    {
        Fraction res;
        return res;
    }
    Fraction operator+(float n, const Fraction other)
    {
        return other;
    }
    Fraction operator-(float n, const Fraction other) { return other; }
    Fraction operator*(float n, const Fraction other) { return other; }
    Fraction operator/(float n, const Fraction other) { return other; }

    bool Fraction ::operator==(const Fraction &other) const { return true; };
    bool Fraction ::operator>(const Fraction &other) const { return true; };
    bool Fraction ::operator<(const Fraction &other) const { return true; };
    bool Fraction ::operator>=(const Fraction &other) const { return true; };
    bool Fraction ::operator<=(const Fraction &other) const { return true; };

    Fraction Fraction::operator++(int number)
    {
        Fraction res;
        return res;
    }
    Fraction Fraction::operator--(int number)
    {
        Fraction res;
        return res;
    }

    Fraction &Fraction::operator++()
    {
        return *this;
    }
    Fraction &Fraction::operator--()
    {
        return *this;
    }

    ostream &operator<<(ostream &out, const Fraction &other)
    {
        return out;
    }
    iostream &operator>>(iostream &in, const Fraction &other)
    {
        return in;
    }
    int Fraction::gcd(int n1, int n2)
    {
        int max = (n1 > n2) ? n1 : n2;
        int res = 0;
        for (int i = 1; i < max; i++)
        {
            if (n1 % i == 0 && n2 % i == 0 && i > res)
            {
                res = i;
            }
        }
        return res;
    }

};
