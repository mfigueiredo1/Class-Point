/**
 * Program Name: fractionUtilityMichaelFigueiredo.cpp
 * Written By:   Michael Figueiredo
 * Updated on:   2023/05/10
 */

#include <iostream> 
#include "FractionMichaelFigueiredo.h"
#include "fractionUtilityMichaelFigueiredo.h"
using namespace std;

void createFractionMF(FractionMichaelFigueiredo*& frPtrRefMF) {
    int numMF;
    int denomMF;

    cout << "\n      While createFractionMF() is running!"
        << endl;

    cout << "\n      Enter an int for num: ";
    cin >> numMF;

    do {
        cout << "\n      Enter a non-zero int for denom: ";
        cin >> denomMF;
    } while (!denomMF);

    frPtrRefMF = new FractionMichaelFigueiredo{ numMF, denomMF };
}

void updateFractionMF(FractionMichaelFigueiredo*& frPtrRefMF) {
    int numMF;
    int denomMF;

    cout << "\n      While createFractionMF() is running!"
        << endl;

    cout << "\n      The information of the current Fraction -"
        << endl;
    frPtrRefMF->printMF();

    cout << "\n      Enter an int for num: ";
    cin >> numMF;

    do {
        cout << "\n      Enter a non-zero int for denom: ";
        cin >> denomMF;
    } while (!denomMF);

    frPtrRefMF->updateMF(numMF, denomMF);
}

FractionMichaelFigueiredo operator+(const FractionMichaelFigueiredo& ref1,
    const FractionMichaelFigueiredo& ref2) {
    return FractionMichaelFigueiredo((ref1.getNumMF() * ref2.getDenomMF()) +
        (ref1.getDenomMF() * ref2.getNumMF()),
        ref1.getDenomMF() * ref2.getDenomMF());
}

FractionMichaelFigueiredo operator/ (const FractionMichaelFigueiredo& ref, int arg) {
    return FractionMichaelFigueiredo(ref.getNumMF(), arg * ref.getDenomMF());

}

FractionMichaelFigueiredo operator*(const FractionMichaelFigueiredo& ref1,
    const FractionMichaelFigueiredo& ref2) {
    return FractionMichaelFigueiredo(abs
    (ref1.getNumMF() * ref2.getNumMF()),
        abs(ref1.getDenomMF() * ref2.getDenomMF()));
}

bool operator==(const FractionMichaelFigueiredo& ref1,
    const FractionMichaelFigueiredo& ref2) {

    if ((ref1.getNumMF() == ref2.getNumMF()) &&
        (ref1.getDenomMF() == ref2.getDenomMF())) {

            return true;

        } else {
        return false;
    }
}

bool operator>(const FractionMichaelFigueiredo& ref1,
    const FractionMichaelFigueiredo& ref2) {

    if ((ref1.getNumMF() * ref1.getDenomMF()) >
        (ref2.getNumMF() * ref2.getDenomMF())) {

        return true;

    } else {
        return false;
    }
}

bool operator < (const FractionMichaelFigueiredo& ref1,
    const FractionMichaelFigueiredo& ref2) {

    if ((ref1.getNumMF() * ref1.getDenomMF()) <
        (ref2.getNumMF() * ref2.getDenomMF())) {

        return true;

    } else {
        return false;
    }
}

FractionMichaelFigueiredo operator-(const FractionMichaelFigueiredo& ref1,
    const FractionMichaelFigueiredo& ref2) {
    return FractionMichaelFigueiredo((ref1.getNumMF() * ref2.getDenomMF()) -
        (ref1.getDenomMF() * ref2.getNumMF()),
        ref1.getDenomMF() * ref2.getDenomMF());
}
