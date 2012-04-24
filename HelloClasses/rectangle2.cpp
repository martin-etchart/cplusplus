// classes example
#include <iostream>
using namespace std;

class CRectangle {
		int *width, *height;
	public:
		CRectangle ();
		CRectangle (int,int);
		~CRectangle ();
		int area() {return (*width * *height);};
};

CRectangle::CRectangle () {
	width = new int;
	height = new int;
  *width = 5;
  *height = 5;
};

CRectangle::CRectangle (int a, int b){
	width = new int;
	height = new int;
	*width = a;
	*height = b;
};

CRectangle::~CRectangle () {
	delete width;
	delete height;
};

int main (){
	CRectangle rect (3,4);
	CRectangle rectb;
	cout << "area rect : " << rect.area() << "\n";
	cout << "area rectb: " << rectb.area() << "\n";
	return 0;
};
