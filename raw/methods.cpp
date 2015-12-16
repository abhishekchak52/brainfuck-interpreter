#include "methods.h"

using namespace std;

Turing::Turing(const char prog[])
{
	d = data;
	p = prog;
}

void Turing::bropen() {
	int bal = 1;
    if (*d == '\0') {
	    do {
	          p++;
	          if      (*p == '[') bal++;
	          else if (*p == ']') bal--;
	        } while ( bal != 0 );
	      }
}
void Turing::brclose() {
	int bal = 0;
    do {
       if      (*p == '[') bal++;
       else if (*p == ']') bal--;
       p--;
    } while ( bal != 0 );
}

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


