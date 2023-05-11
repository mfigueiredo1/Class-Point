/**
* Program Name: pointMichaelFigueiredo.h
* Written By:   Michael Figueiredo
* Updated on:   2023/05/10
*/

#ifndef  POINTMICHAELFIGUEIREDO_H
#define POINTMICHAELFIGUEIREDO_H

#include <iostream>
#include "fractionMichaelFigueiredo.h"
using namespace std;

class PointMichaelFigueiredo {
public:
	PointMichaelFigueiredo(int, int, int, int);

	PointMichaelFigueiredo(const FractionMichaelFigueiredo&,
		const FractionMichaelFigueiredo&);                                      
	
	PointMichaelFigueiredo(const PointMichaelFigueiredo&);

	PointMichaelFigueiredo();

	~PointMichaelFigueiredo();

	FractionMichaelFigueiredo getXMF(void) const;
	FractionMichaelFigueiredo getYMF(void) const;

	void printXptrMF(void) const;  
	void printNumFromXMF(void) const; 
	void printDenomFromXMF(void) const;


	void printYptrMF(void) const;  
	void printNumFromYMF(void) const; 
	void printDenomFromYMF(void) const;

	void updateMF(int, int, int, int);

	FractionMichaelFigueiredo* getXPtrMF(void) const;

	FractionMichaelFigueiredo* getYPtrMF(void) const;

private:
	FractionMichaelFigueiredo* xPtr;
	FractionMichaelFigueiredo* yPtr;
};

#endif
