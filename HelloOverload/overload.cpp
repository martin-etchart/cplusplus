// vectors: overloading operators example

#include <iostream>
using namespace std;

class CVector{
	public:
		int x,y;
		CVector () { x=0; y=0; };
		CVector (int, int); // function name CVector (constructor)
		CVector operator+ (CVector); // function returns a CVector 
};

CVector::CVector (int a, int b){
	x = a;
	y = b;
};

CVector CVector::operator+ (CVector param){
	CVector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return (temp);
};

int main() {
	CVector a (3,4);
	CVector b (5,5);
	CVector c;
	c = a+b;
	//c = a.operator+ (b); // same thing!
	cout << "a   = (" << a.x << "," << a.y << ")\n";
	cout << "b   = (" << b.x << "," << b.y << ")\n";
	cout << "a+b = (" << c.x << "," << c.y << ")\n";
};
