#include <iostream>

using namespace std;

int main(){
	int x;
	cout<< "bir dört arasý bir sayý giriniz" << endl; 
	cin>> x;

	switch (x){
		case 1: cout << "ilkbahar" << endl;
		break;
		case 2: cout << "yaz" << endl;
		break;
		case 3: cout << "sonbahar" <<endl;
		break;
		case 4: cout << "kýþ" << endl;
		break;
		default:
			cout << "error";
	}
	return 0;
	
}
