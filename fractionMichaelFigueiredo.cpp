/**
 * Program Name: fractionMichaelFigueiredo.cpp
 * Written By:   Michael Figueiredo
 * Updated on:   2023/05/10
 */

#include <iostream> 
#include "FractionMichaelFigueiredo.h"
using namespace std;

FractionMichaelFigueiredo::FractionMichaelFigueiredo(int n, int d) :  
    num{ n / gcdMF(n, d) }, denom{ d / gcdMF(n, d) } {
}

FractionMichaelFigueiredo::FractionMichaelFigueiredo(
    const FractionMichaelFigueiredo& ref) :                     
    num{ ref.num }, denom{ ref.denom } {                          
}

FractionMichaelFigueiredo::FractionMichaelFigueiredo() : num{ 0 }, denom{ 1 } {}

FractionMichaelFigueiredo::~FractionMichaelFigueiredo() {}

int FractionMichaelFigueiredo::getNumMF() const {
    return num;
}

void FractionMichaelFigueiredo::setNumMF(int arg) {
    num = arg / gcdMF(arg, denom);
    denom /= gcdMF(arg, denom);
}

int FractionMichaelFigueiredo::getDenomMF() const {
    return denom;
}

void FractionMichaelFigueiredo::setDenomMF(int d) {

    int gcf;

    gcf = gcdMF(num, d);

    num /= gcf;
    denom = d / gcf;
}

int FractionMichaelFigueiredo::gcdMF(int arg1, int arg2) {
    int gcd = 1;
    int sign = (arg2 < 0) ? -1 : 1;

    arg1 = (arg1 < 0) ? -arg1 : arg1;
    arg2 = (arg2 < 0) ? -arg2 : arg2;

    for (int i = 2; i <= arg1 && i <= arg2; i++)
        if (arg1 % i == 0 && arg2 % i == 0)
            gcd = i;
    return sign * gcd;
}

void FractionMichaelFigueiredo::updateMF(int n, int d) {
    int gcf = gcdMF(n, d);

    num = n / gcf;
    denom = d / gcf;
}

void FractionMichaelFigueiredo::printMF() const {

    cout << "\n    Address : " << this
        << "\n      num : " << num
        << "\n      denom : " << denom << endl;
}

int FractionMichaelFigueiredo::isPalindromeMF() const {
    int flag{ false };

    int digitMF;
    int revMF = 0;
    int denomDigitMF = 0;
    int revdenomMF = 0;
    int n = 0;
    int d = 0;

    bool isPalindrome = false;

    n = num;
    d = denom;

    do {
        digitMF = n % 10;
        revMF = (revMF * 10) + digitMF;
        n = n / 10;

    } while (n != 0);

    do {
        denomDigitMF = d % 10;
        revdenomMF = (revdenomMF * 10) + denomDigitMF;
        d = d / 10;

    } while (d != 0);
    
    if ((num == revMF) && (denom == revdenomMF)) {
        return true;
    } else {
        return false;
    }
}