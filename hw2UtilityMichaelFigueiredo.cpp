/**
 * Program Name: hw2UtilityMichaelFigueiredo.cpp
 * Written By:  Michael Figueiredo
 * Updated on:  2023/05/10
 */

#include <iostream>
#include "fractionMichaelFigueiredo.h"
#include "pointMichaelFigueiredo.h"
#include "pointUtilityMichaelFigueiredo.h"
#include "hw2UtilityMichaelFigueiredo.h"

using namespace std;

void displayClassInfoMF(){

    cout <<
        "\nCIS 25B - Fun C++ Programming"
        "\nLaney College"
        "\nMichael Figueiredo\n"
        "\nHomework Information - - "
        "\n  Assignement:                HW #2"
        "\n  Implemented by:             Michael Figueiredo"
        "\n  Required Submission Date:   2023/05/10"
        "\n  Actual Submission Date:     2023/05/10"
        "\n"
        "\nWe write code to manipulate data, which are\n"
        "provided by the user, to produce the\n"
        "required outcome in the most efficient way!" << endl;
}

void runMenuHw2MF() {
    int optionMF;
    PointMichaelFigueiredo* pPtr1{ nullptr };
    PointMichaelFigueiredo* pPtr2{ nullptr };

    do {
        cout << "\n***********************************"
                "\n*  MENU - HW #2                   *"
                "\n* 1. Calling initSubMenuHw2MF()   *"
                "\n* 2. Point Operations             *"
                "\n* 3. Displaying Palindrome Info   *"
                "\n* 4. Displaying Selected Point(s) *"
                "\n* 5. Quit                         *"
                "\n***********************************"
                "\nSelect an option (use integer value only): "; 
        cin >> optionMF;

        switch (optionMF) {
        case 1:
            cout << "  \n  To call initSubMenuHw2MF()!\n";

            initSubMenuHw2MF(pPtr1, pPtr2);

            break;
        case 2:
            if (pPtr1 || pPtr2) {

                cout << "\n  To call performPointOperationMF()-\n";
             cout << "\n    While performPointOperationMF() is running!"<<endl;
             
             performPointOperationMF(*pPtr1, *pPtr2);

            } else {
                cout << "\n  Inappropriate option as there are no Points!" << endl;
            }
            break;
        case 3:
            if (pPtr1 || pPtr2) {
                cout << "\n  Displaying all Palindrome Fraction(s)-\n";

                displayPalindromeInfoMF(pPtr1, pPtr2);
    
            } else {
                cout << "\n  Inappropriate option as there are no Points!" << endl;
            }
            break;
        case 4:
            if (pPtr1 || pPtr2) {
                cout << "\n  To call displayPointMF() -\n";
                cout << "\n    While displayPointMF() is running!\n";

                displayPointMF(pPtr1, pPtr2);

            } else {
                cout << "\n  Inappropriate option as there are no Points!" << endl;
            }
            break;
        case 5:
            if (pPtr1 || pPtr2) {
                cout << "\n  Removing all dynamic allocations\n"
                    "\n    Removing Point #1 through delete --\n" << endl;

                cout << "      Address: " << &pPtr1 << endl;
                cout << "        For x-coordinate as Fraction:\n"
                    "          Address:";
                pPtr1->printXptrMF();
                cout << "\n            Num:";
                pPtr1->printNumFromXMF();
                cout << "\n            Denom:";
                pPtr1->printDenomFromXMF();
                cout << "\n        For y-coordinate as Fraction:"
                    "\n          Address:";
                pPtr1->printXptrMF();
                cout << "\n            Num:";
                pPtr1->printNumFromXMF();
                cout << "\n            Denom:";
                pPtr1->printDenomFromXMF();
                        
                delete pPtr1;
                pPtr1 = nullptr;

                cout << "\n\n    Removing Point #2 through delete --\n" << endl;

                cout << "      Address: " << &pPtr2 << endl;
                cout << "        For x-coordinate as Fraction:\n"
                    "          Address:";
                pPtr2->printXptrMF();
                cout << "\n            Num:";
                pPtr2->printNumFromXMF();
                cout << "\n            Denom:";
                pPtr2->printDenomFromXMF();
                cout << "\n        For y-coordinate as Fraction:"
                    "\n          Address:";
                pPtr2->printXptrMF();
                cout << "\n            Num:";
                pPtr2->printNumFromXMF();
                cout << "\n            Denom:";
                pPtr2->printDenomFromXMF();

                delete pPtr2;
                pPtr2 = nullptr;

                cout << "\n\nHave a nice session!" << endl;
            } else {
                cout << " \n There are no Points to remove!\n"
                    "\n  Quitting" << endl;
            }
            break;
        default:
            cout << "\n  Wrong Option!" << endl;
        }
    } while (optionMF != 5);
}

void initSubMenuHw2MF(PointMichaelFigueiredo*& pPtr1, 
    PointMichaelFigueiredo*& pPtr2) {
    int optionMF;
    int n1;
    int d1;
    int n2;
    int d2;
    int updateOptionMF;

    do {
        cout << "\n    While initSubMenuHw2MF() is running!";
        cout<< "\n    ***********************************"
            "\n    *   SubMenu - initSubMenuHw2MF()  *"
            "\n    * 1. Creating 2 Points            *"
            "\n    * 2. Updating Existing Points     *"
            "\n    * 3. Displaying selected Point(s) *"
            "\n    * 4. Returning                    *"
            "\n    ***********************************"
            "\n    Enter an option: ";
        cin >> optionMF;

        switch (optionMF) {
        case 1:
            if (pPtr1 || pPtr2) {                         
                cout << "\n      There are 2 Points already!"
                    << endl;
            } else {
                cout << "\n      Creating Point #1!"
                    "\n        For x-coordinate as Fraction:"
                    "\n          Enter an int for num: ";
                cin >> n1;
                cout << "          Enter an int for denom: ";
                cin >> d1;

                cout << "        For y-coordinate as Fraction:"
                    "\n          Enter an int for num: ";
                cin >> n2;
                cout << "          Enter an int for denom: ";
                cin >> d2;

                pPtr1 = new PointMichaelFigueiredo{ n1, d1, n2, d2 };

                cout << "\n      Creating Point #2!"
                    "\n        For x-coordinate as Fraction:"
                    "\n          Enter an int for num: ";
                cin >> n1;
                cout << "          Enter an int for denom: ";
                cin >> d1;

                cout << "        For y-coordinate as Fraction:"
                    "\n          Enter an int for num: ";
                cin >> n2;
                cout << "          Enter an int for denom: ";
                cin >> d2;

                pPtr2 = new PointMichaelFigueiredo{ n1, d1, n2, d2 };
            }
            break;
        case 2:
            if (pPtr1 || pPtr2) {
                do {
                    cout << 
                        "\n       *******************************"
                        "\n       * Updating 2 existing Points! *"
                        "\n       * 1. Updating Point #1        *"
                        "\n       * 2. Updating Point #2        *"             
                        "\n       * 3. Returning                *"
                        "\n       *******************************" 
                        "\n       Enter an update option: ";
                    cin >> updateOptionMF;

                    switch (updateOptionMF) {
                    case 1:
                        cout << "\n      Updating Point #1!"
                            "\n        For x-coordinate as Fraction: "
                            "\n          Enter an int for num: ";
                        cin >> n1;
                        cout << "          Enter an int for denom: ";
                        cin >> d1;

                        cout << "\n        For y-coordinate as Fraction: "
                            "\n          Enter an int for num: ";
                        cin >> n2;
                        cout << "          Enter an int for denom: ";
                        cin >> d2;

                        pPtr1->updateMF(n1, d1, n2, d2);

                        break;
                    case 2:
                        cout << "\n      Updating Point #2!"
                            "\n        For x-coordinate as Fraction:"
                            "\n          Enter an int for num: ";
                        cin >> n1;
                        cout << "          Enter an int for denom: ";
                        cin >> d1;

                        cout << "\n        For y-coordinate as Fraction:"
                            "\n          Enter an int for num: ";
                        cin >> n2;
                        cout << "          Enter an int for denom: ";
                        cin >> d2;

                        pPtr2->updateMF(n1, d1, n2, d2);
                        break;
                    case 3:
                        cout << "\n        Returning to previous menu!\n";
                        break;
                    default:
                        cout << "\n        Wrong Option";
                    }
                } while (updateOptionMF != 3);                                   
            } else {
                cout << "\n      There are no Points to update!" << endl;
            }
            break;
        case 3:
            if (pPtr1 || pPtr2) {
                cout << "\n      Displaying Point #1-" << endl;

                displayPointHw2MF(*pPtr1);

                cout << "\n\n      Displaying Point #2-" << endl;
                   
                displayPointHw2MF(*pPtr2); 
                
                cout << "\n";
            } else {
                cout << "\n      There are no Points to display!" << endl;
            }
            break;
        case 4:
            cout << "\n      Return to previous menu!" << endl;
            break;
        default:
            cout << "\n      Wrong Option!" << endl;
        }
    } while (optionMF != 4);
}

void performPointOperationMF(const PointMichaelFigueiredo& ref1,
    const PointMichaelFigueiredo& ref2) {

    int optionMF;

    do {
        cout << "    ***************************************"
            "\n    *  Menu for performPointOperationMF() *"
            "\n    * 1. Alignment: Horizontal/Vertical   *"
            "\n    * 2. Displaying Quadrant              *"
            "\n    * 3. Displaying midpoint              *"
            "\n    * 4. Displaying area of rectangle     *"
            "\n    * 5. Returning                        *"
            "\n    ***************************************";
        cout << "\n    Enter an option: ";
        cin >> optionMF;

        switch (optionMF) {
        case 1:

            displayAlignmentMF(ref1, ref2);

            break;
        case 2:

            displayQuadrantMF(ref1, ref2);

            break;
        case 3:
          
            displayMidpointMF(ref1, ref2);

            break;
        case 4:

            displayAreaMF(ref1, ref2);

            break;
        case 5:
            cout << "\n      Returning to previous menu!" << endl;

            break;
        default:
            cout << "\nWrong Option";
        }

        } while (optionMF != 5);
    }

void displayPointMF(PointMichaelFigueiredo*& pPtr1,
    PointMichaelFigueiredo*& pPtr2) {
    int optionMF;

    do {
        cout << "\n    ******************************"
                "\n    *   Menu for displayPointMF()*"
                "\n    * 1. Displaying Point #1     *"
                "\n    * 2. Displaying Point #2     *"
                "\n    * 3. Returning               *"
                "\n    ******************************";
        cout << "\n    Enter an option: ";
        
        cin >> optionMF;

        switch (optionMF) {
        case 1:
            if (pPtr1) {
                
                cout <<"\n      Displaying Point #1-"
                    << endl;

                displayPointHw2MF(*pPtr1);
                cout << "\n";
            } else {
                cout << " There is no Point for Point #1 ";
            }
            break;
        case 2:
            if (pPtr1) {

                cout << "\n      Displaying Point #2-"
                    << endl;

                displayPointHw2MF(*pPtr2);
                cout << "\n";
                
            } else {
                cout << "  There is no Point for Point #2!"
                    << endl;
            }
            break;
        case 3:
            cout << "\n      Returning to previous menu!\n";
            break;
        default:
            cout << "\n    Wrong Option" << endl;
        }
    } while (optionMF != 3);
}

void displayQuadrantMF(const PointMichaelFigueiredo& ref1,
    const PointMichaelFigueiredo& ref2) {

    cout << "\n      Quadrant Confirmation:\n";

    if ((ref1.getXMF().getNumMF() > 0) && (ref1.getYMF().getNumMF() > 0)) {
        cout << "\n        Point 1 is in Quadrant I" << endl;
    }
    if ((ref1.getYMF().getNumMF() > 0) && (ref1.getXMF().getNumMF() < 0)) {
        cout << "\n        Point 1 is in Quadrant II" << endl;
    }
    if ((ref1.getXMF().getNumMF() < 0) && (ref1.getYMF().getNumMF() < 0)) {
        cout << "\n        Point 1 is in Quadreant III" << endl;
    }
    if ((ref1.getXMF().getNumMF() > 0) && (ref1.getYMF().getNumMF() < 0)) {
        cout << "\n        Point 1 is in Quadrant IV" << endl;
    }
    if ((ref2.getXMF().getNumMF() > 0) && (ref2.getYMF().getNumMF() > 0)) {
        cout << "        Point 2 is in Quadrant I\n" << endl;
    }
    if ((ref2.getYMF().getNumMF() > 0) && (ref2.getXMF().getNumMF() < 0)) {
        cout << "        Point 2 is in Quadrant II\n" << endl;
    }
    if ((ref2.getXMF().getNumMF() < 0) && (ref2.getYMF().getNumMF() < 0)) {
        cout << "        Point 2 is in Quadreant III\n" << endl;
    }
    if ((ref2.getXMF().getNumMF() > 0) && (ref2.getYMF().getNumMF() < 0)) {
        cout << "        Point 2 is in Quadrant IV\n" << endl;
    }
}

void displayAlignmentMF(const PointMichaelFigueiredo& ref1,
    const PointMichaelFigueiredo& ref2) {

    cout << "\n      Alignment Confirmation:\n";

    if (ref1.getXMF() == ref2.getXMF()) {
        cout << "\n        Horizontal Alignment: Yes" << endl;
    } else {
        cout << "\n        Horizontal Alignment: No" << endl;
    } 
    if (ref1.getYMF() == ref2.getYMF()) {
        cout << "        Vertical Alignement: Yes" << endl;
    } else {
        cout << "        Vertical Alignement: No\n" << endl;
    }
}

void displayMidpointMF(const PointMichaelFigueiredo& ref1,
    const PointMichaelFigueiredo& ref2) {

    FractionMichaelFigueiredo point1Xcoordinate{ ref1.getXMF() };
    FractionMichaelFigueiredo point2Xcoordinate{ ref2.getXMF() };

    FractionMichaelFigueiredo point1Ycoordinate{ ref1.getYMF() };
    FractionMichaelFigueiredo point2Ycoordinate{ ref2.getYMF() };

    FractionMichaelFigueiredo midpointx;
    FractionMichaelFigueiredo midpointy;

    midpointx = (point1Xcoordinate + point2Xcoordinate) / 2;
    midpointy = (point1Ycoordinate + point2Ycoordinate) / 2;

    cout << "\n      Midpoint Confirmation:";
    cout << "\n        Fraction from x-coordinate ";    
    cout << "\n          Address:";
    ref1.printXptrMF();
    cout << "\n            Num:" ;
    cout << midpointx.getNumMF() << endl;
    cout << "            Denom:" ;
    cout << midpointx.getDenomMF() << endl;

    cout << "\n        Fraction from y-coordinate ";
    cout << "\n          Address:";
    ref1.printYptrMF();
    cout << "\n            Num:";
    cout << midpointy.getNumMF() << endl;
    cout << "            Denom:";
    cout << midpointy.getDenomMF() <<"\n" << endl;
}

void displayAreaMF(const PointMichaelFigueiredo& ref1,
    const PointMichaelFigueiredo& ref2) {

    FractionMichaelFigueiredo widthMF{ (ref1.getXMF() -
        ref2.getXMF()) };

    FractionMichaelFigueiredo lengthMF{ (ref1.getYMF() -
        ref2.getYMF()) };

    FractionMichaelFigueiredo area{ widthMF *
    lengthMF };

    cout << "\n      Area Confirmation:"
        "\n        Fraction Area:" << endl;
    cout << "          Num:";
    cout << area.getNumMF() << endl;
    cout << "          Denom: ";
    cout << area.getDenomMF() <<"\n" << endl;
}
