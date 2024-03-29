// string modifier, operators, partial matching
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str ("Replace the vowels in the sentence by asterisks.");
	size_t found;
	
	found=str.find_first_of("aeiou");
	while (found!=string::npos) {
		str[found]='*';
		found=str.find_first_of("aeiou",found+1);
	};
	cout << "::find_first_of::\n";
	cout << str << endl;
	
	/*find*/
	string str2 ("There are two needles in this haystack with needles.");
	string str3 ("needle");
	
	found = str2.find(str3);
	if (found!=string::npos){
		cout << "::find::\n";
		cout << "first 'needle' found at: "<< int(found) << endl;
	};
		
	found=str2.find("needles are small",found+1,6);
	if (found!=string::npos)
		cout << "second 'needle' found at: " << int(found) << endl;
		
	/*replace*/	
	str2.replace(str2.find(str3),str3.length(),"preposition");
	cout << "::replace::\n";
	cout << str2 << endl;
	
	return 0;
}
