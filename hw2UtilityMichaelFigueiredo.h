/**
 * Program Name: hw2UtilityMichaelFigueiredo.h
 * Written By:  Michael Figueiredo
 * Updated on:  2023/05/10
 */

#ifndef HW2UTILITYMICHAELFIGUEIREDO_H
#define HW2UTILITYMICHAELFIGUEIREDO_H

#include <iostream>
#include "fractionMichaelFigueiredo.h"
#include "fractionUtilityMichaelFigueiredo.h"
#include "pointMichaelFigueiredo.h"
#include "pointUtilityMichaelFigueiredo.h"
using namespace std;

void displayClassInfoMF(void);
void runMenuHw2MF(void);

void initSubMenuHw2MF(PointMichaelFigueiredo*&, PointMichaelFigueiredo*&);

void initSubMenuHw2MF(PointMichaelFigueiredo**, PointMichaelFigueiredo**);

void performPointOperationMF(const PointMichaelFigueiredo& ref1, 
const PointMichaelFigueiredo& ref2);

void displayQuadrantMF(const PointMichaelFigueiredo& ref1,
    const PointMichaelFigueiredo& ref2);

void displayAlignmentMF(const PointMichaelFigueiredo& ref1,
    const PointMichaelFigueiredo& ref2);

void displayMidpointMF(const PointMichaelFigueiredo& ref1,
    const PointMichaelFigueiredo& ref2);
    
void displayAreaMF(const PointMichaelFigueiredo& ref1,
    const PointMichaelFigueiredo& ref2);

void displayPointMF(PointMichaelFigueiredo*&, PointMichaelFigueiredo*&);

void initSubMenuHw2MF(PointMichaelFigueiredo*&, PointMichaelFigueiredo*&);

#endif

