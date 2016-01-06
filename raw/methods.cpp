#include "methods.h"

using namespace std;

Turing::Turing(const char prog[])
{
	d = data;
	p = prog;
}

void Turing::br_open() {
	int bal = 1;
    if (*d == '\0') {
	    do {
	          p++;
	          if      (*p == '[') bal++;
	          else if (*p == ']') bal--;
	        } while ( bal != 0 );
	      }
}
void Turing::br_close() {
	int bal = 0;
    do {
       if      (*p == '[') bal++;
       else if (*p == ']') bal--;
       p--;
    } while ( bal != 0 );
}

void Turing::interpret() {
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
            br_open();
            break;
         case ']':
            br_close();
            break;
        }
        p++;
      }
}
