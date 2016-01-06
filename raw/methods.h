#include <iostream>
#include <fstream>

using namespace std;
class Turing {
  public:
    char data[30000];
    char *d;
    const char *p;
	Turing(const char[]);
	void br_open();
	void br_close();
	void interpret();
};
