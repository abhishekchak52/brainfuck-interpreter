#include "methods.h"
using namespace std;

char prog[30000];
char *ptr = prog;
int main(int argc, const char* argv[]) {
	// Checking for correct usage
	if( argc != 2 || !strcmp(argv[1],"--help") || !strcmp(argv[1],"-h")) // Incorrect usage or help flag
		cout<<" Usage : ./brainfuck-interpreter [FILE]"<<endl
				<<" \t [FILE] is a file containing the brainfuck program that is to be interpreted"<<endl;
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
