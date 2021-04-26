//Date_Public.h
#pragma once
#include "Triad.h"

class Date_Public : public Triad
{
public:
	Date_Public();
	Date_Public(double, double, double);
	Date_Public(Date_Public&);

	Date_Public& operator = (const  Date_Public&);
	friend ostream& operator << (ostream&, const  Date_Public&);
	friend istream& operator >> (istream&, Date_Public&);
	operator string() const;

	int Ñomparison(const Triad t1, const Triad t2) const;
	void TriadResult(int result);
	void date1(int result);

	Date_Public& operator ++ ();
	Date_Public& operator -- ();
	Date_Public operator ++ (int);
	Date_Public operator -- (int);
};
