//Triad.h
#pragma once
#include <iostream>
#include <sstream>
#include "Bad_exception.h"
using namespace std;

class Triad
{
private:
	double first, second, third;
public:
	void SetFirst(double value);
	void SetSecond(double value);
	void SetThird(double value);

	double GetFirst() const;
	double GetSecond() const;
	double GetThird() const;

	Triad();
	Triad(double, double, double)throw(invalid_argument, bad_exception, Bad_exception, const char*);
	Triad(const Triad&);

	friend bool operator > (const Triad t1, const Triad t2);
	friend bool operator < (const Triad t1, const Triad t2);
	friend bool operator == (const Triad t1, const Triad t2);

};
