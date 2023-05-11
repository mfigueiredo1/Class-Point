/**
 * Program Name: fractionMichaelFigueiredo.h
 * Written By:   Michael Figueiredo
 * Updated on:   2023/05/10
 */

#ifndef FRACTIONMICHAELFIGUEIREDO_H
#define FRACTIONMICHAELFIGUEIREDO_H

#include <iostream>
using namespace std;

class FractionMichaelFigueiredo {
public:
    FractionMichaelFigueiredo(int, int);
    FractionMichaelFigueiredo();
    FractionMichaelFigueiredo(const FractionMichaelFigueiredo&);

    ~FractionMichaelFigueiredo();

    int getNumMF(void) const;    
    void setNumMF(int);

    int getDenomMF(void) const;
    void setDenomMF(int);

    void updateMF(int, int);
    int isPalindromeMF(void) const;

    void printMF(void) const; 

private:
    int num;
    int denom;

    int gcdMF(int, int);
};

#endif
