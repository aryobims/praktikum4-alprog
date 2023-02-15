#include <iostream>
using namespace std;

int main (){
	string nim, password;
	
	cout << "	|---------------------------------------------------|	" << endl;
	cout << "	|============ Login Dashboard Mahasiswa ============|	" << endl;
	cout << "	|---------------------------------------------------|	" << endl;
	cout << "	Masukan nim: ";
	cin >> nim;
	cout << "	Masukkan password: ";
	cin >> password;
	
	//percabangan if else
    if ((nim == "21.11.4311") && (password == "algoritma")) {
		cout << "Selamat Login Dashboard Mahasiswa Berhasil !" << endl;
	} else {
		cout << "Kombinasi nim dan password salah, silahkan coba lagi !" << endl;
	}
}
