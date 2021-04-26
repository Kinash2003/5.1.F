//Date_Private.cpp
#include "Date_Private.h"

Date_Private::Date_Private() : Triad(0, 0, 0) {}//конструктор за умовчанням
Date_Private::Date_Private(double first = 0, double second = 0, double third = 0) : Triad(first, second, third) {}//конструктор ініціалізації
Date_Private::Date_Private(Date_Private& A) : Triad(A.GetFirst(), A.GetSecond(), A.GetThird()) {}//конструктор копіювання

Date_Private& Date_Private::operator = (const Date_Private& A)//перевантаження операції "присвоєння"
{
	this->SetFirst(A.GetFirst());
	this->SetSecond(A.GetSecond());
	this->SetThird(A.GetThird());
	return *this;
}
ostream& operator << (ostream& out, const Date_Private& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Date_Private& A)
{
	double first, second, third;
	cout << " First = "; in >> first;
	cout << " Second = "; in >> second;
	cout << " Third = "; in >> third;
	cout << " " << first << "." << second << "." << third << endl;
	A.SetFirst(first); A.SetSecond(second), A.SetThird(third);
	return in;
}
Date_Private::operator string() const
{
	stringstream ss;
	ss << " First: " << this->GetFirst() << endl;
	ss << " Second: " << this->GetSecond() << endl;
	ss << " Third: " << this->GetThird() << endl;
	return ss.str();
}

int Date_Private::Сomparison(const Date_Private t1, const Date_Private t2) const
{
	if (t1 > t2)
		return 1;
	if (t1 < t2)
		return 2;
	if (t1 == t2)
		return 3;
}
void Date_Private::TriadResult(int result)
{
	switch (result)
	{
	case 1:
		cout << " t1 > t2 " << endl;
		break;
	case 2:
		cout << " t1 < t2 " << endl;
		break;
	case 3:
		cout << " t1 = t2 " << endl;
		break;
	}

}
void Date_Private::date1(int result)
{
	switch (result)
	{
	case 1:
		cout << " d1 > d2 " << endl;
		break;
	case 2:
		cout << " d1 < d2 " << endl;
		break;
	case 3:
		cout << " d1 = d2 " << endl;
		break;
	}
}
Date_Private& Date_Private::operator ++ ()//перевантаження операції "інкременту"(префіксна форма)
{
	this->SetFirst(this->GetFirst() + 1);
	return *this;
}
Date_Private& Date_Private::operator -- ()//перевантаження операції "дикременту"(префіксна форма)
{
	this->SetFirst(this->GetFirst() - 1);
	return *this;
}
Date_Private Date_Private::operator ++ (int)//перевантаження операції "інкременту"(постфіксна форма)
{
	Date_Private t(*this);
	this->SetSecond(this->GetSecond() + 1);
	return t;
}
Date_Private Date_Private::operator -- (int)//перевантаження операції "дикременту"(постфіксна форма)
{
	Date_Private t(*this);
	this->SetSecond(this->GetSecond() - 1);
	return t;
}
