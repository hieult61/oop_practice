//nap chong toan tu nhap xuat
#include <iostream>
using namespace std;

// ham nap chong la thanh vien lop
//class vector {
//	private:
//		int x,y;
//	public:
//		vector (){
//			x = y = 0;
//		}
//		vector (int a, int b){
//			x=a;y=b;
//		}
//		ostream& operator << (ostream&);
//};
//
//ostream& vector :: operator << (ostream& os){
//	os << "(" << x << ", " << y << ")";
//	return os;
//}
//
//int main (){
//	vector a (2,3);
//	a << (cout);
//}

// ham nap chong khong phai thanh vien lop
class vector {
	private:
		int x,y;
	public:
		vector (){
			x = y = 0;
		}
		vector (int a, int b){
			x=a;y=b;
		}
		friend ostream& operator << (ostream&, vector);
};

ostream& operator << (ostream& os, vector a){
	os << "(" << a.x << ", " << a.y << ")";
	return os;
}

int main(){
	vector a;
	cout << a;
}
	

