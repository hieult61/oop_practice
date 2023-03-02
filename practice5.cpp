#include <iostream>
using namespace std;

class Complex {
	private:
		float real;
		float img;
	public:
		Complex (float, float);
		// toan tu cong 2 so phuc
		Complex operator + (const Complex);
		// toan tu tang 1 don vi thuc va ao
		Complex operator ++ (void);
		void show(void);
};

Complex :: Complex (float a, float b){
	real = a;
	img = b;
}

Complex Complex :: operator + (const Complex b){
	Complex c(0,0);
	c.real = real + b.real;
	c.img = img + b.img;
	return c;
}

Complex Complex :: operator ++ (){
	Complex c(0,0);
	c.real = ++real;
	c.img = ++img;
	return c;
}

void Complex :: show(){
	cout << "Real " << real << " Image " << img << endl;
}

int main (){
	Complex a (3,2);
	Complex b (-1,1);
	// Doi tuong moi la ket qua cua toan tu 
	Complex c (0,0);
	c = (a+b);
	(a+b).show();
	(++a).show();
	c.show();
	(a+ (++b) + (a+b)).show();
}
