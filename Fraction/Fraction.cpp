#include <iostream>
#include "Fraction.h"
using namespace std;

//в файле с исходным кодом *.cpp реализуются все методы и функции, объявленные в заголовочном файле.

//если описывается реализация метода, 
//то с помощью операции разрешения области видимости указывается принадлежность имени метода классу

Fraction::Fraction(int numerator, int denominator)
{
	SetNumerator(numerator);
	SetDenominator(denominator);
}

void Fraction::SetNumerator(int numerator)
{
	_numerator = numerator;
}
void Fraction::SetDenominator(int denominator)
{
	if (denominator != 0)
		_denominator = denominator;
	else
		_denominator = 1;
}

int Fraction::GetNumerator() const
{
	return _numerator;
}
int Fraction::GetDenominator() const
{
	return _denominator;
}

void Fraction::Print() const
{	
	cout << _numerator << " / " << _denominator << endl;
}

Fraction Fraction::operator/(Fraction rightFr)
{
	Fraction res;
	res._numerator = this->_numerator * rightFr._denominator;
	res._denominator = this->_denominator * rightFr._numerator;
	return res;
}

Fraction Fraction::operator/(int rightNum)
{
	Fraction res;
	res._numerator = _numerator;
	res._denominator = _denominator * rightNum;
	return res;
}

Fraction Fraction::operator-()
{
	Fraction res;
	res._numerator = -_numerator;
	res._denominator = _denominator;
	return res;
}

bool Fraction::operator==(Fraction rightFr)
{
	return _numerator == rightFr._numerator && _denominator == rightFr._denominator;
}

bool Fraction::operator!=(Fraction rightFr)
{
	return  _numerator != rightFr._numerator || _denominator != rightFr._denominator;
}

Fraction operator/(int leftNum, Fraction rightFr)
{
	Fraction res;
	res.SetNumerator(leftNum * rightFr.GetDenominator());
	res.SetDenominator(rightFr.GetNumerator());
	return res;
}

Fraction operator*(Fraction leftFr, Fraction rightFr)
{
	Fraction res;
	res.SetNumerator(leftFr.GetNumerator() * rightFr.GetNumerator());
	res.SetDenominator(leftFr.GetDenominator() * rightFr.GetDenominator());
	return res;
}

Fraction operator*(Fraction leftFr, int rightNum)
{
	Fraction res;
	res.SetNumerator(leftFr.GetNumerator() * rightNum);
	res.SetDenominator(leftFr.GetDenominator());
	return res;
}

Fraction operator*(int leftNum, Fraction rightFr)
{
	Fraction res;
	res.SetNumerator(leftNum * rightFr.GetNumerator());
	res.SetDenominator(rightFr.GetDenominator());
	return res;
}

//Fraction operator-(Fraction fr)
//{
//	Fraction res;
//	res.SetNumerator(-fr.GetNumerator());
//	res.SetDenominator(fr.GetDenominator());
//	return res;
//}
