#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace ariel;
TEST_CASE("check constructor")
{
    CHECK_NOTHROW(Fraction(5, 4));
    CHECK_THROWS(Fraction(0));
}
TEST_CASE("CHECK FUNCTION")
{
    for (int i = 1; i < 1000; i++)
    {
        Fraction a(i*2,i*3),b(i*4,i*5);
        CHECK_NOTHROW(a * b);
        CHECK_NOTHROW(a + b);
        CHECK_NOTHROW(a - b);
        CHECK_NOTHROW(a / b);
        CHECK_NOTHROW(a++);
        CHECK_NOTHROW(++a);
        CHECK_NOTHROW(b++);
        CHECK_NOTHROW(++b);
        CHECK_NOTHROW(a--);
        CHECK_NOTHROW(--a);
        CHECK_NOTHROW(b--);
        CHECK_NOTHROW(--b);
        CHECK(a<=1);
        CHECK(b<=1);
        CHECK(a<1);
        CHECK(b<1);
        CHECK(a>b);
    }

}
TEST_CASE("negtive number"){
    for(int i=1;i<100;i++){

        int n1=rand()%100+i;
        int d1=rand()%102+200;

        int n2=(rand()%100+i);
        int d2=(rand()%(100)+i)*(-1);

        Fraction a(n1,d1),b(n2,d2);
        CHECK_NOTHROW(Fraction a(n1,d1));
        CHECK_NOTHROW(Fraction b(n2,d2));

        CHECK(b<1);
        CHECK(a>b);
        CHECK(b<=-1);
        CHECK(a * b==a.operator*(b));
        
        CHECK_NOTHROW(a + b);
        CHECK_NOTHROW(a - b);
        CHECK_NOTHROW(a / b);
        CHECK_NOTHROW(a++);
        CHECK_NOTHROW(++a);
        CHECK_NOTHROW(b++);
        CHECK_NOTHROW(++b);
        CHECK_NOTHROW(a--);
        CHECK_NOTHROW(--a);
        CHECK_NOTHROW(b--);
        CHECK_NOTHROW(--b);

    
    }
}