#include <iostream>
using namespace std;
#define MAX 10

struct product {
	float weigh;
	float price;
};

product apple[MAX], banana[MAX];

void buy (product pd[], string name, float &weigh, float &price){
	int i = 0; 
	char yn;
	cout << "Buy " << name << endl;
	while (true){
	cout << "Insert weigh and price: " << endl;
	cin >> pd[i].weigh;
	cin >> pd[i].price;
	weigh += pd[i].weigh;
	price += pd[i].price;
	cout << "Continue to buy ? Y/N" << endl;
	cin >> yn;
	if ((yn == 'N')||(yn == 'n'))
		break;
	else i++;
}	
}

int main(){
	float weigh = 0;
	float price = 0;
	buy (apple, "apple", weigh,price);
	buy (banana, "banana", weigh,price);
	cout << "Weigh: " << weigh << endl;
	cout << "Price: " << price << endl;
}
