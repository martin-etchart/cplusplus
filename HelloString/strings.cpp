// string constructors
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s0 ("Initial String");
	
	// diferent contructors of strings
	string s1;
	string s2 (s0);		//copy s0;
	string s3 (s0,8,3); // copy s0 3 characters starting at pos 8 	
	string s4 ("A character sequence",6);
	string s5 ("Another character sequence");
	string s6 (10,'*');	// string of 10 '*'
	string s7a (20,43);
	string s7b (s0.begin(), s0.begin()+7);
	
	cout << "s1 : " << s1 << "\n";
	cout << "s2 : " << s2 << "\n";
	cout << "s3 : " << s3 << "\n";
	cout << "s4 : " << s4 << "\n";
	cout << "s5 : " << s5 << "\n";
	cout << "s6 : " << s6 << "\n";
	cout << "s7a: " << s7a << "\n";
	cout << "s7b: " << s7b << "\n";
	return 0;
}
