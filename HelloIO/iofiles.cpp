// basic file operations
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ofstream myfile;
	myfile.open ("example.txt",ios::out | ios::app);
	myfile << "Writing this to a file.\n";
	myfile << "Appending this to the end of the file.\n";
	myfile.close ();
	
	string line;
	ifstream myfile2 ("example.txt");
	if (myfile2.is_open()) {
		while ( myfile2.good() ){
			getline (myfile2,line);
			cout << line << endl;
		}
		myfile2.close();
	} else cout << "Unable to open the file";
	
	return 0;
}
