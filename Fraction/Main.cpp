#include <iostream>
#include "Fraction.h"
using namespace std;


void foo(const Fraction& fr)
{
    fr.Print();
}

int main()
{
    int a = 10;
    int b = 23;
    int c = a + b;

    Fraction fr1(3, 7);
    Fraction fr2(2, 5);   

    Fraction fr3 = fr1 * fr2; //operator*(fr1, fr2)    
    fr3.Print();

    Fraction fr4 = fr2 * 2;  //operator*(fr2, 2)
    fr4.Print();

    Fraction fr5 =  2 * fr3; //operator*(2, fr3)
    fr5.Print();

    Fraction fr6 = fr1 / fr2; //fr1.operator/(fr2);
    fr6.Print();

    Fraction fr7 = fr1 / 2;  //fr1.operator/(2);
    fr7.Print();

    Fraction fr8 = 2 / fr1; //operator/(2, fr1)
    fr8.Print();

    Fraction fr9 = -fr8; //fr8.operator-();  operator-(fr8)
    fr9.Print();

    if (fr8 == fr9)
    {
        cout << "fr8 == fr9" << endl;
    }
    else
    {
        cout << "fr8 != fr9" << endl;
    }

    const Fraction fr(1, 3);
    fr.Print();
}

