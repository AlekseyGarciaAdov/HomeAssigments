#include <iostream>
#include <string>

using namespace std;

extern string hi;

void hello() {
	hi = "Hello, World!";
	cout << hi;
}
