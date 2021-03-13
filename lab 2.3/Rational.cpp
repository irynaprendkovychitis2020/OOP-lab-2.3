#include "Rational.h"
Rational::Rational()
{
	a = 0;
	b = 0;
}
Rational::Rational(double A, double B)
{
	a = A;
	b = B;
}
Rational::Rational(const Rational& X)
{
	a = X.a;
	b = X.b;
}
ostream& operator << (ostream& out, const Rational& X)
{
	return out << string(X);
}
istream& operator >>(istream& in, Rational& X)
{
	cout << "Enter a: "; in >> X.a;
	cout << "Enter b: "; in >> X.b;
	cout << endl;
	return in;
}
Rational::operator string() const
{
	stringstream ss;
	ss << "a= " << a << "  b= " << b << endl;
	return ss.str();
}
double Rational::value()
{
	return 1. * a / b;
}

double Rational::div(Rational& l, Rational& r)
{
	double tmp = (l.a * r.b) / (r.a * l.b);
	return tmp;
}

bool Rational::equal(Rational& l, Rational& r)
{

	if (l.a == r.a && l.b == r.b)
		return true;
	else
		return false;
}

bool Rational::great(Rational& l, Rational& r)
{

	if ((l.a * r.b) > (l.b * r.a))
		return true;
	else
		return false;

}
bool Rational::less(Rational& l, Rational& r)
{

	if ((l.a * r.b) < (l.b * r.a))
		return true;
	else
		return false;

}
Rational& Rational::operator --()
{
	--a;
	return *this;
}
Rational& Rational::operator ++()
{
	++a;
	return *this;
}
Rational Rational::operator --(int)
{
	Rational tmp(*this);
	b--;
	return tmp;
}
Rational Rational::operator ++(int)
{
	Rational tmp(*this);
	b++;
	return tmp;
}