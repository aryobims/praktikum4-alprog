#include <iostream>
using namespace std;

int main (){
	int nilai;
	
	cout << "masukkan nilai = ";
	cin >> nilai;
	
	//percabangan if else
	if (nilai % 3 == 0) {
		cout<<nilai<<" adalah bilangan ganjil";
	} else {
		cout<<nilai<<" adalah bilangan genap";
	}
}