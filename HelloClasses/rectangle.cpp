// classes example
#include <iostream>
using namespace std;

class CRectangle {
		int x, y;
	public:
		void set_values(int,int);
		int area() {return (x*y);};
};

void CRectangle::set_values(int a, int b){
	x = a;
	y = b;
}

int main (){
	CRectangle rect;
	CRectangle rectb;
	rect.set_values(3,4);
	cout << "area rect : " << rect.area() << "\n";
	cout << "area rectb: " << rectb.area() << "\n";
	return 0;
};
