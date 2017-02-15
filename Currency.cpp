#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <math.h>
#include <iostream>
#include "Currency.h"

void splitParts(float& wholeParts, float& fractionalParts, float someValue) {
	fractionalParts = round(fmod((someValue * 100), 100));
	wholeParts = someValue - (fractionalParts / 100);
}

Currency::Currency() {
	this->WholeName = "";
	this->FractionalName = "";
	this->WholeParts = 0;
	this->FractionalParts = 0;
}

void Currency::addWhole(float wholeParts) {
	this->WholeParts += wholeParts;
}

void Currency::addFractional(float fractionalParts) {
	this->FractionalParts += fractionalParts;
	if (this->FractionalParts >= 100) {
		this->WholeParts++;
		this->FractionalParts -= 100;
	}
}

void Currency::subWhole(float wholeParts) {
	this->WholeParts -= wholeParts;
}

void Currency::subFractional(float fractionalParts) {
	if (this->FractionalParts < fractionalParts) {
		this->WholeParts--;
		this->FractionalParts += 100;
	}
	this->FractionalParts -= fractionalParts;
}

void Currency::addValue(float someValue) {
	float wholeParts, fractionalParts;
	splitParts(wholeParts, fractionalParts, someValue);
	Currency::addWhole(wholeParts);
	Currency::addFractional(fractionalParts);
}

void Currency::subValue(float someValue) {
	float wholeParts, fractionalParts;
	splitParts(wholeParts, fractionalParts, someValue);
	Currency::subWhole(wholeParts);
	Currency::subFractional(fractionalParts);
}

ostream& Currency::printCurrency(ostream& os) const {
	return os << this->WholeParts << "." << this->FractionalParts;
}

ostream& operator<<(ostream& os, const Currency& currency) {
	return currency.printCurrency(os);
}

Currency::~Currency(){}