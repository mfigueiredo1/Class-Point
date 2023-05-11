/**
 * Program Name: pointMichaelFigueiredo.cpp
 * Written By:   Michael Figueiredo
 * Updated on:   2023/05/10
 */

#include <iostream>
#include "fractionMichaelFigueiredo.h"
#include "pointMichaelFigueiredo.h"
using namespace std;

PointMichaelFigueiredo::PointMichaelFigueiredo(int n1, int d1, int n2, int d2) :
	xPtr{ new FractionMichaelFigueiredo{n1, d1} },
	yPtr{ new FractionMichaelFigueiredo{ n2, d2} } {
}

PointMichaelFigueiredo::PointMichaelFigueiredo(const PointMichaelFigueiredo& ptRef) :

	xPtr{ new FractionMichaelFigueiredo{*(ptRef.xPtr)} },
	yPtr{ new FractionMichaelFigueiredo{*(ptRef.yPtr)} } {}

PointMichaelFigueiredo::PointMichaelFigueiredo() {}

PointMichaelFigueiredo:: ~PointMichaelFigueiredo() {

	delete xPtr;
	xPtr = nullptr;

	delete yPtr;
	yPtr = nullptr;
}

FractionMichaelFigueiredo PointMichaelFigueiredo::getXMF()const {
	return *xPtr;
}

FractionMichaelFigueiredo PointMichaelFigueiredo::getYMF() const {
	return *yPtr;
}

void PointMichaelFigueiredo::printXptrMF() const {
	cout << xPtr;
}

void PointMichaelFigueiredo::printYptrMF() const {
	cout << yPtr;
}

void PointMichaelFigueiredo::printNumFromXMF() const {
	cout << xPtr->getNumMF();             
}  

void PointMichaelFigueiredo::printDenomFromXMF() const {
	cout << xPtr->getDenomMF();
}

void PointMichaelFigueiredo::printNumFromYMF() const {
	cout << yPtr->getNumMF();
}

void PointMichaelFigueiredo::printDenomFromYMF() const {
	cout << yPtr->getDenomMF();
}

void PointMichaelFigueiredo::updateMF(int n1, int d1, int n2, int d2) {

	xPtr->setNumMF(n1);
	xPtr->setDenomMF(d1);

	yPtr->setNumMF(n2);
	yPtr->setDenomMF(d2);
}
FractionMichaelFigueiredo* PointMichaelFigueiredo::getXPtrMF() const {
	return xPtr;
}
FractionMichaelFigueiredo* PointMichaelFigueiredo::getYPtrMF() const {
	return yPtr;
}
