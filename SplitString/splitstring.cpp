// string split int tokens

/* http://stackoverflow.com/a/5208977/1403372
 * http://cplusplus.com/reference/iostream/stringstream/
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string str1 ("Deposito con cheque en caja ahorro");
	
	string buf;
	stringstream ss(str1);
	
	vector<string> tokens; // Create vector to hold our words

    while (ss >> buf)
    {
    	if (buf.length()>3){
		    tokens.push_back(buf);
			cout << buf << endl;
    	}
    }
	

	return 0;
}
