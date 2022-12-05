#pragma once

//в заголовочном файле *.h определяются только сигнатуры функций и методов.

//этот файл необходимо подлючать с помощью директивы #include в тех файлах проекта,
//где используются данные фукции и типы даных

class Fraction
{
public:
	Fraction() = default;
	Fraction(int numerator, int denominator);

	void SetNumerator(int numerator);
	void SetDenominator(int denominator);

	int GetNumerator() const;
	int GetDenominator() const;

	void Print() const;

	//объявление бинароной операции / как метода класса
	//левый операнд метод принимает через this
	//правый операнд принимает через параметр
	
	Fraction operator/(Fraction rightFr);
	Fraction operator/(int rightNum);

	bool operator==(Fraction rightFr);
	bool operator!=(Fraction rightFr);


	//объявление унарной операции - как метода класса
	//единственный операнд метод принимает через this
	
	Fraction operator-();
	
private:
	int _numerator = 0; //числитель
	int _denominator = 1; //знаменатель
};

//объявление бинароной операции / как глобальной функции
//левый операнд принимает через первый параметр
//правый операнд принимает через второй параметр

Fraction operator*(Fraction leftFr, Fraction rightFr);
Fraction operator*(Fraction leftFr, int rightNum);
Fraction operator*(int leftNum, Fraction rightFr);

//т.к. левый операнд не является типом нашего класса, операцию можно перегрузить только функцией
Fraction operator/(int leftNum, Fraction rightFr);


//объявление унарной операции - как глобальной функции
//единственный операнд принимает через параметр

//Fraction operator-(Fraction fr);

