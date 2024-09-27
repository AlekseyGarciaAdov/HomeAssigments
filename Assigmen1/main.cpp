/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Project 1"*/

#include <iostream>
#include <string>
#include "headers.h"

using namespace std;

string hi;

int main() {
	hello();
	cout<<endl;
	string shi = hi.substr(0, 7);
	string name;
	while (name != "exit"){
		getline(cin, name);
		cout <<  shi << name << "!" << endl;
	}
	return 0;
}
