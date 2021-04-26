//Date_Private.h
#include "Triad.h"

class Date_Private :private Triad
{
public:
	Date_Private();
	Date_Private(double, double, double);
	Date_Private(Date_Private&);

	Date_Private& operator = (const Date_Private&);
	friend ostream& operator << (ostream&, const Date_Private&);
	friend istream& operator >> (istream&, Date_Private&);
	operator string() const;

	int Ñomparison(const Date_Private t1, const Date_Private t2) const;
	void TriadResult(int result);
	void date1(int result);

	Date_Private& operator ++ ();
	Date_Private& operator -- ();
	Date_Private operator ++ (int);
	Date_Private operator -- (int);
};
