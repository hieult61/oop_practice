#include <iostream>
using namespace std;

class Rectangle{
	private:
		float width;
		float length;
	public:
		Rectangle (void);
		Rectangle (float, float);
		~Rectangle (void);
		friend int area (Rectangle);
		
};

Rectangle :: Rectangle (){
	width = 0;
	length = 0;
}

Rectangle :: Rectangle (float x,float y){
	width = x;
	length = y;
}

Rectangle :: ~Rectangle (){

}

int area (Rectangle m){
	return (m.width*m.length);
}


int main(){
	Rectangle m (2,3);
	cout << area (m) <<endl;
}
