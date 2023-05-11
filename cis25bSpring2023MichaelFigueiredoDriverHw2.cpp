/**
 * Program Name: cis25bSpring2023MichaelFigueiredoDriverHw2.cpp
 * Written By:   Michael Figueiredo
 * Date:         2023/05/10
 */

#include <iostream> 
#include "fractionMichaelFigueiredo.h"
#include "fractionUtilityMichaelFigueiredo.h"
#include "hw2UtilityMichaelFigueiredo.h"

using namespace std;

int main() {

    displayClassInfoMF();

    runMenuHw2MF();

    return 0;
}

/** PROGRAM_OUTPUT 
* 
*
CIS 25B - Fun C++ Programming
Laney College
Michael Figueiredo

Homework Information - -
  Assignement:                HW #2
  Implemented by:             Michael Figueiredo
  Required Submission Date:   2023/05/10
  Actual Submission Date:     2023/05/10

We write code to manipulate data, which are
provided by the user, to produce the
required outcome in the most efficient way!

***********************************
*  MENU - HW #2                   *
* 1. Calling initSubMenuHw2MF()   *
* 2. Point Operations             *
* 3. Displaying Palindrome Info   *
* 4. Displaying Selected Point(s) *
* 5. Quit                         *
***********************************
Select an option (use integer value only): 2

  Inappropriate option as there are no Points!

***********************************
*  MENU - HW #2                   *
* 1. Calling initSubMenuHw2MF()   *
* 2. Point Operations             *
* 3. Displaying Palindrome Info   *
* 4. Displaying Selected Point(s) *
* 5. Quit                         *
***********************************
Select an option (use integer value only): 3

  Inappropriate option as there are no Points!

***********************************
*  MENU - HW #2                   *
* 1. Calling initSubMenuHw2MF()   *
* 2. Point Operations             *
* 3. Displaying Palindrome Info   *
* 4. Displaying Selected Point(s) *
* 5. Quit                         *
***********************************
Select an option (use integer value only): 4

  Inappropriate option as there are no Points!

***********************************
*  MENU - HW #2                   *
* 1. Calling initSubMenuHw2MF()   *
* 2. Point Operations             *
* 3. Displaying Palindrome Info   *
* 4. Displaying Selected Point(s) *
* 5. Quit                         *
***********************************
Select an option (use integer value only): 1

  To call initSubMenuHw2MF()!

    While initSubMenuHw2MF() is running!
    ***********************************
    *   SubMenu - initSubMenuHw2MF()  *
    * 1. Creating 2 Points            *
    * 2. Updating Existing Points     *
    * 3. Displaying selected Point(s) *
    * 4. Returning                    *
    ***********************************
    Enter an option: 2

      There are no Points to update!

    While initSubMenuHw2MF() is running!
    ***********************************
    *   SubMenu - initSubMenuHw2MF()  *
    * 1. Creating 2 Points            *
    * 2. Updating Existing Points     *
    * 3. Displaying selected Point(s) *
    * 4. Returning                    *
    ***********************************
    Enter an option: 3

      There are no Points to display!

    While initSubMenuHw2MF() is running!
    ***********************************
    *   SubMenu - initSubMenuHw2MF()  *
    * 1. Creating 2 Points            *
    * 2. Updating Existing Points     *
    * 3. Displaying selected Point(s) *
    * 4. Returning                    *
    ***********************************
    Enter an option: 1

      Creating Point #1!
        For x-coordinate as Fraction:
          Enter an int for num: 50
          Enter an int for denom: 5
        For y-coordinate as Fraction:
          Enter an int for num: 4
          Enter an int for denom: -1

      Creating Point #2!
        For x-coordinate as Fraction:
          Enter an int for num: 5
          Enter an int for denom: -5
        For y-coordinate as Fraction:
          Enter an int for num: 12
          Enter an int for denom: 2

    While initSubMenuHw2MF() is running!
    ***********************************
    *   SubMenu - initSubMenuHw2MF()  *
    * 1. Creating 2 Points            *
    * 2. Updating Existing Points     *
    * 3. Displaying selected Point(s) *
    * 4. Returning                    *
    ***********************************
    Enter an option: 3

      Displaying Point #1-

        Address: 000001E2B820F5E0
          For x-coordinate as Fraction:
            Address: 000001E2B820EF50
              Num: 10
              Denom:1
          For y-coordinate as Fraction:
            Address: 000001E2B820ED20
              Num: -4
              Denom 1

      Displaying Point #2-

        Address: 000001E2B820F860
          For x-coordinate as Fraction:
            Address: 000001E2B820EFA0
              Num: -1
              Denom:1
          For y-coordinate as Fraction:
            Address: 000001E2B820F900
              Num: 6
              Denom 1

    While initSubMenuHw2MF() is running!
    ***********************************
    *   SubMenu - initSubMenuHw2MF()  *
    * 1. Creating 2 Points            *
    * 2. Updating Existing Points     *
    * 3. Displaying selected Point(s) *
    * 4. Returning                    *
    ***********************************
    Enter an option: 4

      Return to previous menu!

***********************************
*  MENU - HW #2                   *
* 1. Calling initSubMenuHw2MF()   *
* 2. Point Operations             *
* 3. Displaying Palindrome Info   *
* 4. Displaying Selected Point(s) *
* 5. Quit                         *
***********************************
Select an option (use integer value only): 4

  To call displayPointMF() -

    While displayPointMF() is running!

    ******************************
    *   Menu for displayPointMF()*
    * 1. Displaying Point #1     *
    * 2. Displaying Point #2     *
    * 3. Returning               *
    ******************************
    Enter an option: 1

      Displaying Point #1-

        Address: 000001E2B820F5E0
          For x-coordinate as Fraction:
            Address: 000001E2B820EF50
              Num: 10
              Denom:1
          For y-coordinate as Fraction:
            Address: 000001E2B820ED20
              Num: -4
              Denom 1

    ******************************
    *   Menu for displayPointMF()*
    * 1. Displaying Point #1     *
    * 2. Displaying Point #2     *
    * 3. Returning               *
    ******************************
    Enter an option: 2

      Displaying Point #2-

        Address: 000001E2B820F860
          For x-coordinate as Fraction:
            Address: 000001E2B820EFA0
              Num: -1
              Denom:1
          For y-coordinate as Fraction:
            Address: 000001E2B820F900
              Num: 6
              Denom 1

    ******************************
    *   Menu for displayPointMF()*
    * 1. Displaying Point #1     *
    * 2. Displaying Point #2     *
    * 3. Returning               *
    ******************************
    Enter an option: 3

      Returning to previous menu!

***********************************
*  MENU - HW #2                   *
* 1. Calling initSubMenuHw2MF()   *
* 2. Point Operations             *
* 3. Displaying Palindrome Info   *
* 4. Displaying Selected Point(s) *
* 5. Quit                         *
***********************************
Select an option (use integer value only): 3

  Displaying all Palindrome Fraction(s)-

    From Point #1:
      Fraction from y-coordinate
        Address:000001E2B820ED20
          Num:-4
          Denom:1

    From Point #2:
      Fraction from x-coordinate
        Address:000001E2B820EFA0
          Num:-1
          Denom:1

      Fraction from y-coordinate
        Address:000001E2B820F900
          Num:6
          Denom:1

  The largest Palindrome Fraction:
    Address: 000001E2B820F900
      Num:6
      Denom:1

  The smallest Palindrome Fraction:
    Address: 000001E2B820ED20
      Num:-4
      Denom:1

***********************************
*  MENU - HW #2                   *
* 1. Calling initSubMenuHw2MF()   *
* 2. Point Operations             *
* 3. Displaying Palindrome Info   *
* 4. Displaying Selected Point(s) *
* 5. Quit                         *
***********************************
Select an option (use integer value only): 2

  To call performPointOperationMF()-

    While performPointOperationMF() is running!
    ***************************************
    *  Menu for performPointOperationMF() *
    * 1. Alignment: Horizontal/Vertical   *
    * 2. Displaying Quadrant              *
    * 3. Displaying midpoint              *
    * 4. Displaying area of rectangle     *
    * 5. Returning                        *
    ***************************************
    Enter an option: 1

      Alignment Confirmation:

        Horizontal Alignment: No
        Vertical Alignement: No

    ***************************************
    *  Menu for performPointOperationMF() *
    * 1. Alignment: Horizontal/Vertical   *
    * 2. Displaying Quadrant              *
    * 3. Displaying midpoint              *
    * 4. Displaying area of rectangle     *
    * 5. Returning                        *
    ***************************************
    Enter an option: 2

      Quadrant Confirmation:

        Point 1 is in Quadrant IV
        Point 2 is in Quadrant II

    ***************************************
    *  Menu for performPointOperationMF() *
    * 1. Alignment: Horizontal/Vertical   *
    * 2. Displaying Quadrant              *
    * 3. Displaying midpoint              *
    * 4. Displaying area of rectangle     *
    * 5. Returning                        *
    ***************************************
    Enter an option: 3

      Midpoint Confirmation:
        Fraction from x-coordinate
          Address:000001E2B820EF50
            Num:9
            Denom:2

        Fraction from y-coordinate
          Address:000001E2B820ED20
            Num:1
            Denom:1

    ***************************************
    *  Menu for performPointOperationMF() *
    * 1. Alignment: Horizontal/Vertical   *
    * 2. Displaying Quadrant              *
    * 3. Displaying midpoint              *
    * 4. Displaying area of rectangle     *
    * 5. Returning                        *
    ***************************************
    Enter an option: 4

      Area Confirmation:
        Fraction Area:
          Num:110
          Denom: 1

    ***************************************
    *  Menu for performPointOperationMF() *
    * 1. Alignment: Horizontal/Vertical   *
    * 2. Displaying Quadrant              *
    * 3. Displaying midpoint              *
    * 4. Displaying area of rectangle     *
    * 5. Returning                        *
    ***************************************
    Enter an option: 5

      Returning to previous menu!

***********************************
*  MENU - HW #2                   *
* 1. Calling initSubMenuHw2MF()   *
* 2. Point Operations             *
* 3. Displaying Palindrome Info   *
* 4. Displaying Selected Point(s) *
* 5. Quit                         *
***********************************
Select an option (use integer value only): 5

  Removing all dynamic allocations

    Removing Point #1 through delete --

      Address: 000000BB827FF7D8
        For x-coordinate as Fraction:
          Address:000001E2B820EF50
            Num:10
            Denom:1
        For y-coordinate as Fraction:
          Address:000001E2B820EF50
            Num:10
            Denom:1

    Removing Point #2 through delete --

      Address: 000000BB827FF7F8
        For x-coordinate as Fraction:
          Address:000001E2B820EFA0
            Num:-1
            Denom:1
        For y-coordinate as Fraction:
          Address:000001E2B820EFA0
            Num:-1
            Denom:1

Have a nice session!
*/

/** Logic_Code_Output_Issues
No Comments!
*/
