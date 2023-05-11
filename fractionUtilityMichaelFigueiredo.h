/**
 *  Program Name: fractionUtilityMichaelFigueiredo.h
 *  Written By:   Michael Figueiredo
 *  Updated on:   2023/05/10
 **/

#ifndef FRACTIONUTILITYMICHAELFIGUEIREDO_H
#define FRACTIONUTILITYMICHAELFIGUEIREDO_H

#include <iostream>
#include "fractionMichaelFigueiredo.h"
using namespace std;

void createFractionMF(FractionMichaelFigueiredo*&);
void updateFractionMF(FractionMichaelFigueiredo*&);

FractionMichaelFigueiredo operator+(const FractionMichaelFigueiredo&, 
	const FractionMichaelFigueiredo&);
	
FractionMichaelFigueiredo operator/(const FractionMichaelFigueiredo&, 
	int);

FractionMichaelFigueiredo operator*(const FractionMichaelFigueiredo&,
	const FractionMichaelFigueiredo&);

bool operator == (const FractionMichaelFigueiredo&,
	const FractionMichaelFigueiredo&);

bool operator > (const FractionMichaelFigueiredo&,
	const FractionMichaelFigueiredo&);

bool operator < (const FractionMichaelFigueiredo&,
	const FractionMichaelFigueiredo&);

FractionMichaelFigueiredo operator-(const FractionMichaelFigueiredo& ref1,
	const FractionMichaelFigueiredo& ref2);

#endif
