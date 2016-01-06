#include "methods.h"
using namespace std;

char prog[30000];
char *ptr = prog;
int main(int argc, const char* argv[]) {
	// File handling
	ifstream program(argv[1],ios::in);
	while(program)
	{
		program.get(*(ptr++));
	}

    Turing interpreter = Turing(prog);
    interpreter.interpret();
return 0;
}
