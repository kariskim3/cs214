/* namer.cpp implements and tests class Name.
 *
 * Begun by: Dr. Adams, CS 214 at Calvin College.
 * Completed by:
 * Date:
 */

#include <iostream>        // istream, ostream
#include <string>          // string
#include <cassert>         // assert()
using namespace std;

// Replace this line with the declaration of class Name 


/**************************************************
* Name constructs a name from three strings.      *
* Receive: first, middle and last, three strings. *
* Return: the triplet (first middle last).        *
***************************************************/

// Replace this line with the constructor definition

/***************************************************
 * getFirst() extracts the first name of a Name object. *
 * Return: myFirst.                                *
 ***************************************************/

// Replace this line with the getFirst() definition

/*****************************************************
 * getMiddle() extracts the middle name of a Name object. *
 * Return: myMiddle.                                 *
 *****************************************************/

// Replace this line with the getMiddle() definition

/**************************************************
 * getLast() extracts the last name of a Name object.  *
 * Return: myLast.                                *
 **************************************************/

// Replace this line with the getLast() definition

/***************************************************
 * getFullName() returns a full name in F-M-L order.    *
 * Return: myFirst, myMiddle, myLast.              *
 ***************************************************/

// Replace this line with the getFullName() definition

/****************************************************
 * print() displays a Name object.                    *
 * Receive: out, the name of a stream.              *
 * Output: the strings in theName to buffer.        *
 * POST: out contains myFirst, myMiddle and myLast. *
 ****************************************************/

// Replace this line with the print() definition

/******************************************
 * a simple driver to test our Name type. *
 ******************************************/
int main()
{
  Name aName("John", "Paul", "Jones");

//  assert( aName.getFirst() == "John" );
//  assert( aName.getMiddle() == "Paul" );
//  assert( aName.getLast() == "Jones" );
//  assert( aName.getFullName() == "John Paul Jones" );
  
//  aName.print(cout);  cout << endl;
  cout << "\n\nAll tests passed! " << endl;
}

