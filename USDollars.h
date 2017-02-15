#ifndef USDOLLARS_H
#define USDOLLARS_H
#include <iostream>
#include "Currency.h"

using namespace std;

class USDollars : public Currency {

public:
	USDollars();
	USDollars(float, float);

	virtual ostream& printCurrency(ostream&) const;
	friend bool operator==(const USDollars& currentCurrency, const USDollars& testCurrency);
	friend bool operator<(const USDollars& currentCurrency, const float someValue);
	

	~USDollars();
};

#endif USDOLLARS_H