#include <iostream>
using namespace std;

int main(){
	string password;
	
	cout<< "============ Login Smart TV ============" << endl;
	cout<< "Masukkan Password; ";
	cin >> password;
	
	// Percabangan if else
		if (password == "tvfamily"){
			cout << "Selamat Menikmati Tayangan" << endl;
		} else {
			cout << "Maaf Password salah, silahkan coba lagi!" << endl;
		}
}