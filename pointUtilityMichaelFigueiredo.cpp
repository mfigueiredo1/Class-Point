/**
 * Program Name: pointUtilityMichaelFigueiredo.cpp
 * Written By:  Michael Figueiredo
 * Updated on:  2023/05/10
 */

#include <iostream>
#include "pointMichaelFigueiredo.h"
#include "fractionMichaelFigueiredo.h"
#include "pointUtilityMichaelFigueiredo.h"
#include "fractionUtilityMichaelFigueiredo.h"
using namespace std;

void displayPointHw2MF(const PointMichaelFigueiredo& pt) {
	cout << "\n        Address: " << &pt;
	cout << "\n          For x-coordinate as Fraction:"
		"\n            Address: ";
	pt.printXptrMF();
	cout << "\n              Num: ";
	pt.printNumFromXMF();       
	cout << "\n              Denom:";
	pt.printDenomFromXMF();

	cout << "\n          For y-coordinate as Fraction:"
		"\n            Address: ";
	pt.printYptrMF();
	cout << "\n              Num: ";
	pt.printNumFromYMF();    
	cout << "\n              Denom ";
	pt.printDenomFromYMF();
}

void displayPalindromeInfoMF(const PointMichaelFigueiredo* pPtr1,
	const PointMichaelFigueiredo* pPtr2) {

	FractionMichaelFigueiredo** aryOfFractionPtr{
		new FractionMichaelFigueiredo * [4] {pPtr1->getXPtrMF(), pPtr1->getYPtrMF(),
	pPtr2->getXPtrMF(), pPtr2->getYPtrMF()} };

	FractionMichaelFigueiredo* largestFrPtr{ nullptr };
	FractionMichaelFigueiredo* smallestFrPtr{ nullptr };
	int i, j;   
	bool noPalindrome{ true };
		
	if (aryOfFractionPtr[0]->isPalindromeMF() || aryOfFractionPtr[1]->isPalindromeMF()) {
		cout << "\n    From Point #1:\n";

		if (aryOfFractionPtr[0]->isPalindromeMF()) {
			cout << "      Fraction from x-coordinate\n"
				"        Address:"
				<< aryOfFractionPtr[0] <<
				"\n          Num:"
				<< aryOfFractionPtr[0]->getNumMF()
				<< "\n          Denom:"
				<< aryOfFractionPtr[0]->getDenomMF() << endl;
		}
		if (aryOfFractionPtr[1]->isPalindromeMF()) {
			cout << "      Fraction from y-coordinate\n"
				"        Address:"
				<< aryOfFractionPtr[1] <<
				"\n          Num:"
				<< aryOfFractionPtr[1]->getNumMF()
				<< "\n          Denom:"
				<< aryOfFractionPtr[1]->getDenomMF() << endl;
		}
	}
	if (aryOfFractionPtr[2]->isPalindromeMF() || aryOfFractionPtr[3]->isPalindromeMF()) {
		cout << "\n    From Point #2:";

		if (aryOfFractionPtr[2]->isPalindromeMF()) {
			cout << "\n      Fraction from x-coordinate\n"
				"        Address:"
				<< aryOfFractionPtr[2] <<
				"\n          Num:"
				<< aryOfFractionPtr[2]->getNumMF()
				<< "\n          Denom:"
				<< aryOfFractionPtr[2]->getDenomMF() << endl;
		}
		if (aryOfFractionPtr[3]->isPalindromeMF()) {
			cout << "\n      Fraction from y-coordinate\n"
				"        Address:"
				<< aryOfFractionPtr[3] <<
				"\n          Num:"
				<< aryOfFractionPtr[3]->getNumMF()
				<< "\n          Denom:"
				<< aryOfFractionPtr[3]->getDenomMF() << endl;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (aryOfFractionPtr[i]->isPalindromeMF()) {
			largestFrPtr = aryOfFractionPtr[i];
			smallestFrPtr = aryOfFractionPtr[i];
			j = i;
			i = 4;
			noPalindrome = false;
		}
	}
	if (noPalindrome == true){ 
		
		cout << "     There are no Palindromes!" << endl;
		}
	for (i = j; i < 4; i++) {
		if (aryOfFractionPtr[i]->isPalindromeMF()) {
			if (*largestFrPtr < *(aryOfFractionPtr[i])) {
				largestFrPtr = aryOfFractionPtr[i];
			}
		}
	}
	for (i = j; i < 4; i++) {
		if (aryOfFractionPtr[i]->isPalindromeMF()) {
			if (*smallestFrPtr > *(aryOfFractionPtr[i])) {
				smallestFrPtr = aryOfFractionPtr[i];
			}
		}
	}
	cout << "\n  The largest Palindrome Fraction:\n"
		"    Address: "
		<< largestFrPtr
		<< "\n      Num:"
		<< largestFrPtr->getNumMF()
		<< "\n      Denom:"
		<< largestFrPtr->getDenomMF()
		<< "\n\n  The smallest Palindrome Fraction:\n"
		"    Address: "
		<< smallestFrPtr
		<< "\n      Num:"
		<< smallestFrPtr->getNumMF()
		<< "\n      Denom:"
		<< smallestFrPtr->getDenomMF() << endl;
}
