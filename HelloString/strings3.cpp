// string compare
#include <iostream>
#include <string>
using namespace std;

int main() {
	string line0 ("BANCO DE LA REPUBLICA");
	string line1 ("Importe:**************344.00");
	string word0 ("BANCO");
	string word1 ("Importe");
	
	if (line0.compare(word0) == 0)
		cout << word0 << " matches exactly " << line0 << endl;

	if (line0.compare(0,5,word0,0,5) == 0)
		cout << word0 << " matches partialy " << line0 << endl;

	return 0;
};
