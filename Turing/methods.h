// methods.h
// Class definition for class Turing
#include <iostream>
#include <fstream>

using namespace std;
class Turing {
  public:
    char data[30000];   // The tape
    char *d;		// The pointer
    const char *p;	// The program command 
	Turing(const char[]);
	void bropen();
	void brclose();
	void evaluate();
};
