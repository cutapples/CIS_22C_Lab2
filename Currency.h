#ifndef CURRENCY_H
#define CURRENCY_H

#include <string>

using namespace std;

class Currency {
protected:

	string WholeName;
	string FractionalName;
	float WholeParts;
	float FractionalParts;

public:
	Currency();

	void addWhole(float wholeParts);
	void addFractional(float fractionalParts);
	void subWhole(float wholeParts);
	void subFractional(float fractionalParts);
	void addValue(float someValue);
	void subValue(float someValue);

	virtual ~Currency() = 0;
};

#endif CURRENCY_H