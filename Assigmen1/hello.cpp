/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Project 1"*/

#include <iostream>
#include <string>
#include "headers.h"

using namespace std;

extern string hi;

void hello() {
	hi = "Hello, World!";
	cout << hi;
}
