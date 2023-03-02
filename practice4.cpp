#include <iostream>
using namespace std;

class Rectangle{
	private:
		float w;
		float h;
	public:
		Rectangle (float, float);
		friend class Square;
};

Rectangle :: Rectangle (float a, float b){
	w = a;
	h = b;
}

class Square {
	private:
		float w;
		float h;
	public:
		Square (const Rectangle);
		void showSquare (void);
};

Square :: Square (const Rectangle m){
	this -> w = max (m.w, m.h);
	this -> h = max (m.w, m.h);	
}

void Square :: showSquare (){
	cout << "Square is ";
	cout << w << " x " << h;
}

int main (){
	Rectangle m(2,3);
	Square m1(m);
	m1.showSquare();
}
