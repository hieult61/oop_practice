#include <iostream>
using namespace std;
#define MAX 5

class Human{
	private: 
		int age;
		string name;
	public:
		void setage (int);
		void setname (string);
		string getname (void);
		int getage (void);
};

void Human :: setage (int age){
	this -> age = age;
}

void Human :: setname (string name){
	this -> name = name;
}

string Human :: getname (){
	return this -> name;
}

int Human :: getage (){
	return this -> age;
}

int main (){
	Human man[MAX];
	for (int i = 0; i < MAX ; i++){
		string s;
		int a;
		cout << "Insert name and age of person " << i+1 << endl;
		cin >> s >> a;
		man[i].setname(s);
		man[i].setage(a);
	}
	cout << "Name and age list: " << endl;
	for (int i = 0; i < MAX ; i++){
		cout << i+1 << ". " << man[i].getname() << " " << man[i].getage() << endl;
		
	}
}
