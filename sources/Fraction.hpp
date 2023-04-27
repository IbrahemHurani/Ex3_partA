#ifndef Fraction_HPP
#define Fraction_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <numeric>


using namespace std;
namespace ariel
{

    class Fraction
    {
    private:
        int numerator;
        int denominator;

    public:
        Fraction();
        Fraction(float n);
        Fraction(int n, int d);
        Fraction operator+(const Fraction &other) const;
        Fraction operator-(const Fraction &other) const;
        Fraction operator*(const Fraction &other) const;
        Fraction operator/(const Fraction &other) const;

        friend  Fraction operator+(float n, const Fraction other);
        friend  Fraction operator-(float n, const Fraction other);
        friend  Fraction operator*(float n, const Fraction other);
        friend  Fraction operator/(float n, const Fraction other);




        bool operator==(const Fraction &other) const;
        bool operator>(const Fraction &other) const;
        bool operator<(const Fraction &other) const;
        bool operator>=(const Fraction &other) const;
        bool operator<=(const Fraction &other) const;

        friend bool operator==(float,const Fraction &other);
        friend bool operator>(float,const Fraction &other);
        friend bool operator<(float,const Fraction &other);
        friend bool operator>=(float,const Fraction &other);
        friend bool operator<=(float,const Fraction &other);



        Fraction operator++(int number);
        Fraction operator--(int number);

        Fraction &operator++();
        Fraction &operator--();

        friend ostream &operator<<(ostream &, const Fraction &other);
        friend iostream &operator>>(iostream &, const Fraction &other);

        int gcd(int n1,int n2);

        
    };

};

#endif
