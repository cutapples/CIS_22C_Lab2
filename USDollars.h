#ifndef USDOLLARS_H
#define USDOLLARS_H
#include <iostream>
#include "Currency.h"

using namespace std;

class USDollars : public Currency {

public:
	USDollars();
	USDollars(int, int);

	friend bool operator==(const USDollars& currentCurrency, const USDollars& testCurrency);
	friend bool operator<(const USDollars& currentCurrency, const float someValue);
	friend ostream& operator<< (ostream&, const USDollars&);

	~USDollars();
};

#endif USDOLLARS_H
