// main.cpp
// Contains the main() function
#include "methods.h"
using namespace std;
// Global variables
char prog[30000];
char *ptr = prog;
int main(int argc, const char* argv[]) 
{
	// File handling
	ifstream program(argv[1],ios::in);
	while(program)
	{
		// Reading the file character by character
		program.get(*(ptr++));
	}
	// Creating a new Turing Tape Machine and feeding it the program
	Turing interpreter = Turing(prog);
	interpreter.evaluate(); // Running the program on the machine
	return 0;
}
