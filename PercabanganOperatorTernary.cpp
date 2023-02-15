#include <iostream>
using namespace std;

int main(){
	int jawaban;
	
	cout << "Berapakah hasil 12-9?" << endl;
	cout << "jawab: ";
	cin >> jawaban;
	
	string hasil = (jawaban == 3) ? "Benar" : "Salah";
	cout << "Jawaban anda: " << hasil << endl;
}