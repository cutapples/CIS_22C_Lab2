#include <string>
#include <math.h>
#include <iostream>
#include "USDollars.h"
#include "Currency.h"

using namespace std;

void splitParts(float& wholeParts, float& fractionalParts, float someValue) {
	fractionalParts = round(fmod((someValue * 100), 100));
	wholeParts = someValue - (fractionalParts / 100);
}

USDollars::USDollars() {
	this->WholeName = "Dollars";
	this->FractionalName = "Cents";
	this->WholeParts = 0;
	this->FractionalParts = 0;
}

USDollars::USDollars(float w, float f) {
	this->WholeName = "Dollars";
	this->FractionalName = "Cents";
	this->WholeParts = w;
	this->FractionalParts = f;
}

USDollars::~USDollars() {

}

bool operator==(const USDollars& currentCurrency, const USDollars& testCurrency) {
	return (currentCurrency.WholeName == testCurrency.WholeName);
}

bool operator<(const USDollars& currentCurrency, const float someValue) {
	float whole, fractional;
	splitParts(whole, fractional, someValue);
	return ((currentCurrency.WholeParts < whole) || ((currentCurrency.WholeParts == whole) && (currentCurrency.FractionalParts < fractional)));
}

ostream& operator<<(ostream& os, const USDollars& currency) {
	if (&os == &cout) {
		os << "$" << currency.WholeParts << "." << currency.FractionalParts << " USD";
	}
	return os;
}
