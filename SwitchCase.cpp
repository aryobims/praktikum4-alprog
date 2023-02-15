#include <iostream>
using namespace std;

int main(){
	char grade;
	
	cout << "Inputkan Grade: ";
	cin >> grade;
	
	switch (grade) {
		case 'A':
			cout << "Luar Biasa!" << endl;
			break;
		case 'B':
			cout << "Bagus!" << endl;
			break;
		case 'C':
			cout << "Cukup!" << endl;
			break;
		case 'D':
		case 'E':
			cout << "Anda Remidi!" << endl;
			break;
		default:
			cout << "Grade Salah!" << endl;
	}
}