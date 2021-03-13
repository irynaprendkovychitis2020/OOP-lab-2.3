#pragma once
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
class Rational
{
private:
	double a, b;
public:
	Rational();
	Rational(double a, double b);
	Rational(const Rational& X);

	friend ostream& operator << (ostream& out, const Rational& X);
	friend istream& operator >> (istream& in, Rational& X);
	operator string() const;

	void SetA(double value) { a = value; };
	void SetB(double value) { b = value; };
	double GetA() const { return a; };
	double GetB() const { return b; };

	friend Rational add(Rational& l, Rational& r);
	double value();
	double div(Rational& l, Rational& r);
	bool equal(Rational& l, Rational& r);
	bool great(Rational& l, Rational& r);
	bool less(Rational& l, Rational& r);

	Rational& operator --();
	Rational& operator ++();
	Rational operator --(int);
	Rational operator ++(int);
};