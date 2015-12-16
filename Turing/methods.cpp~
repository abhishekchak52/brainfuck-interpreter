// methods.cpp
// Contains definitions for methods of class Turing
#include "methods.h"

using namespace std;
// Parameterized Constructor
Turing::Turing(const char prog[])
{
	d = data;	
	p = prog;
}
// Br(acket)open function to deal with [ command
void Turing::bropen() {
	int nest = 1; // Level of nesting
    if (*d == '\0') { 
	    do {
	          p++;
	          if      (*p == '[') nest++;
	          else if (*p == ']') nest--;
	        } while ( nest != 0 );
	      }
}
// Br(acket)close function to deal with ] command
void Turing::brclose() {
	int nest = 0;
    do {
       if      (*p == '[') nest++;
       else if (*p == ']') nest--;
       p--;
    } while ( nest != 0 );
}
// Evaluate() performs actions based on what command is read.
void Turing::evaluate() {
   while (*p) {
      switch (*p) {
         case '>':
            d++;
            break;
         case '<':
            d--;
            break;
         case '+':
            (*d)++;
            break;
         case '-':
            (*d)--;
            break;
         case '.':
            cout << *d;
            break;
         case ',':
            cin >> *d;
            break;
         case '[':
            bropen();
            break;
         case ']':
            brclose();
            break;
        }
        p++;
      }
}

