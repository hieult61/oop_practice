// chong chat toan tu khong phai ham thanh vien cua lop
#include <iostream>
using namespace std;

class Complex {
	private:
		float real;
		float img;
	public: 
		Complex (float,float);
		void show (void);
		friend Complex operator - (Complex, Complex);
};

Complex :: Complex (float a, float b){
	real = a;
	img = b;
}

void Complex :: show(){
	cout << "Real " << real << " Image " << img << endl;
}

Complex operator - (const Complex a, const Complex b){
	Complex c (0,0);
	c.real = a.real - b.real;
	c.img = a.img - b.img;
	return c;
}

int main (){
	Complex a(1,1);
	Complex b(4,3);
	Complex c(0,0);
	c = b-a;
	c.show();
}
