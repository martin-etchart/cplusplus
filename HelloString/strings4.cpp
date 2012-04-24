// recorrer string
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	char *cstr, *p;

	string str ("BANCO DE LA REPUBLICA ORIENTAL DEL URUGUAY");
	
	cstr = new char [str.size()+1];
	strcpy (cstr,str.c_str());

	//cstr now contains a c-string copy of str
	
	p = strtok(cstr, " ");
	while (p!=NULL) {
		cout << p << endl;
		p=strtok(NULL," ");
	}
	
	delete[] cstr;
	return 0;
};
