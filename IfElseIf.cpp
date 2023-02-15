#include <iostream>
using namespace std;

int main (){
	int nilai;
	string grade;
	
	cout << "|-------------------------------|" << endl;
	cout << "|===== Program Grade Nilai =====|" << endl;
	cout << "|-------------------------------|" << endl;
	cout << "inputkan nilai akhir: ";
	cin >> nilai;
	
	// Menggunakan Percabangan if/else/if
	if (nilai > 80){
		grade = "A";
	} else if (nilai > 60) {
		grade = "B";
	} else if (nilai > 40) {
		grade = "C";
	} else if (nilai > 20) {
		grade = "D";
	} else {
		grade = "E";
	}
	
	cout << "Grade Anda: " << grade << endl;
}